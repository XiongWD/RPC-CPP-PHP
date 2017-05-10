/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef SecondService_H
#define SecondService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "ThriftTest_types.h"

namespace thrift { namespace test {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class SecondServiceIf {
 public:
  virtual ~SecondServiceIf() {}
  virtual void blahBlah() = 0;

  /**
   * Prints 'testString("%s")' with thing as '%s'
   * @param string thing - the string to print
   * @return string - returns the string 'thing'
   * 
   * @param thing
   */
  virtual void secondtestString(std::string& _return, const std::string& thing) = 0;
};

class SecondServiceIfFactory {
 public:
  typedef SecondServiceIf Handler;

  virtual ~SecondServiceIfFactory() {}

  virtual SecondServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(SecondServiceIf* /* handler */) = 0;
};

class SecondServiceIfSingletonFactory : virtual public SecondServiceIfFactory {
 public:
  SecondServiceIfSingletonFactory(const boost::shared_ptr<SecondServiceIf>& iface) : iface_(iface) {}
  virtual ~SecondServiceIfSingletonFactory() {}

  virtual SecondServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(SecondServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<SecondServiceIf> iface_;
};

class SecondServiceNull : virtual public SecondServiceIf {
 public:
  virtual ~SecondServiceNull() {}
  void blahBlah() {
    return;
  }
  void secondtestString(std::string& /* _return */, const std::string& /* thing */) {
    return;
  }
};


class SecondService_blahBlah_args {
 public:

  SecondService_blahBlah_args(const SecondService_blahBlah_args&);
  SecondService_blahBlah_args& operator=(const SecondService_blahBlah_args&);
  SecondService_blahBlah_args() {
  }

  virtual ~SecondService_blahBlah_args() throw();

  bool operator == (const SecondService_blahBlah_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SecondService_blahBlah_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_blahBlah_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SecondService_blahBlah_pargs {
 public:


  virtual ~SecondService_blahBlah_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SecondService_blahBlah_result {
 public:

  SecondService_blahBlah_result(const SecondService_blahBlah_result&);
  SecondService_blahBlah_result& operator=(const SecondService_blahBlah_result&);
  SecondService_blahBlah_result() {
  }

  virtual ~SecondService_blahBlah_result() throw();

  bool operator == (const SecondService_blahBlah_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SecondService_blahBlah_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_blahBlah_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SecondService_blahBlah_presult {
 public:


  virtual ~SecondService_blahBlah_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _SecondService_secondtestString_args__isset {
  _SecondService_secondtestString_args__isset() : thing(false) {}
  bool thing :1;
} _SecondService_secondtestString_args__isset;

class SecondService_secondtestString_args {
 public:

  SecondService_secondtestString_args(const SecondService_secondtestString_args&);
  SecondService_secondtestString_args& operator=(const SecondService_secondtestString_args&);
  SecondService_secondtestString_args() : thing() {
  }

  virtual ~SecondService_secondtestString_args() throw();
  std::string thing;

  _SecondService_secondtestString_args__isset __isset;

  void __set_thing(const std::string& val);

  bool operator == (const SecondService_secondtestString_args & rhs) const
  {
    if (!(thing == rhs.thing))
      return false;
    return true;
  }
  bool operator != (const SecondService_secondtestString_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_secondtestString_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SecondService_secondtestString_pargs {
 public:


  virtual ~SecondService_secondtestString_pargs() throw();
  const std::string* thing;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SecondService_secondtestString_result__isset {
  _SecondService_secondtestString_result__isset() : success(false) {}
  bool success :1;
} _SecondService_secondtestString_result__isset;

class SecondService_secondtestString_result {
 public:

  SecondService_secondtestString_result(const SecondService_secondtestString_result&);
  SecondService_secondtestString_result& operator=(const SecondService_secondtestString_result&);
  SecondService_secondtestString_result() : success() {
  }

  virtual ~SecondService_secondtestString_result() throw();
  std::string success;

  _SecondService_secondtestString_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const SecondService_secondtestString_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SecondService_secondtestString_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_secondtestString_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SecondService_secondtestString_presult__isset {
  _SecondService_secondtestString_presult__isset() : success(false) {}
  bool success :1;
} _SecondService_secondtestString_presult__isset;

class SecondService_secondtestString_presult {
 public:


  virtual ~SecondService_secondtestString_presult() throw();
  std::string* success;

  _SecondService_secondtestString_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SecondServiceClient : virtual public SecondServiceIf {
 public:
  SecondServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  SecondServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void blahBlah();
  void send_blahBlah();
  void recv_blahBlah();
  void secondtestString(std::string& _return, const std::string& thing);
  void send_secondtestString(const std::string& thing);
  void recv_secondtestString(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class SecondServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<SecondServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (SecondServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_blahBlah(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_secondtestString(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  SecondServiceProcessor(boost::shared_ptr<SecondServiceIf> iface) :
    iface_(iface) {
    processMap_["blahBlah"] = &SecondServiceProcessor::process_blahBlah;
    processMap_["secondtestString"] = &SecondServiceProcessor::process_secondtestString;
  }

  virtual ~SecondServiceProcessor() {}
};

class SecondServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  SecondServiceProcessorFactory(const ::boost::shared_ptr< SecondServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< SecondServiceIfFactory > handlerFactory_;
};

class SecondServiceMultiface : virtual public SecondServiceIf {
 public:
  SecondServiceMultiface(std::vector<boost::shared_ptr<SecondServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~SecondServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<SecondServiceIf> > ifaces_;
  SecondServiceMultiface() {}
  void add(boost::shared_ptr<SecondServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void blahBlah() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->blahBlah();
    }
    ifaces_[i]->blahBlah();
  }

  void secondtestString(std::string& _return, const std::string& thing) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->secondtestString(_return, thing);
    }
    ifaces_[i]->secondtestString(_return, thing);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class SecondServiceConcurrentClient : virtual public SecondServiceIf {
 public:
  SecondServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  SecondServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void blahBlah();
  int32_t send_blahBlah();
  void recv_blahBlah(const int32_t seqid);
  void secondtestString(std::string& _return, const std::string& thing);
  int32_t send_secondtestString(const std::string& thing);
  void recv_secondtestString(std::string& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}} // namespace

#endif
