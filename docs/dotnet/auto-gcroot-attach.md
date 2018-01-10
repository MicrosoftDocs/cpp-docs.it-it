---
title: auto_gcroot::Attach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- auto_gcroot.attach
- auto_gcroot::attach
- msclr::auto_gcroot::attach
- msclr.auto_gcroot.attach
dev_langs: C++
helpviewer_keywords: auto_gcroot::attach
ms.assetid: 996ede65-bcb5-41f2-bfbf-507f8a578241
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c244e9fde20498c5d688dbebbc2c35294164cf11
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="autogcrootattach"></a>auto_gcroot::attach
Collegare `auto_gcroot` a un oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
auto_gcroot<_element_type> & attach(  
   _element_type _right  
);  
auto_gcroot<_element_type> & attach(  
   auto_gcroot<_element_type> & _right  
);  
template<typename _other_type>  
auto_gcroot<_element_type> & attach(  
   auto_gcroot<_other_type> & _right  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_right`  
 Oggetto da connettere, o un `auto_gcroot` contenente l'oggetto da connettere.  
  
## <a name="return-value"></a>Valore restituito  
 Oggetto `auto_gcroot` corrente.  
  
## <a name="remarks"></a>Note  
 Se `_right` è un `auto_gcroot`, rilascia la proprietà dell'oggetto prima che l'oggetto è connesso all'oggetto corrente `auto_gcroot`.  
  
## <a name="example"></a>Esempio  
  
```  
// msl_auto_gcroot_attach.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
protected:     
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ) {  
      Console::WriteLine( "in ClassA constructor:" + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "in ClassA destructor:" + m_s );  
   }  
  
   virtual void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
ref class ClassB : ClassA {  
public:  
   ClassB( String ^ s) : ClassA( s ) {}  
   virtual void PrintHello() new {  
      Console::WriteLine( "Hello from {0} B!", m_s );  
   }  
};  
  
int main() {  
   auto_gcroot<ClassA^> a( gcnew ClassA( "first" ) );  
   a->PrintHello();  
   a.attach( gcnew ClassA( "second" ) ); // attach same type  
   a->PrintHello();  
   ClassA^ ha = gcnew ClassA( "third" );  
   a.attach( ha ); // attach raw handle  
   a->PrintHello();  
   auto_gcroot<ClassB^> b( gcnew ClassB("fourth") );  
   b->PrintHello();  
   a.attach( b ); // attach derived type  
   a->PrintHello();  
}  
```  
  
```Output  
in ClassA constructor:first  
Hello from first A!  
in ClassA constructor:second  
in ClassA destructor:first  
Hello from second A!  
in ClassA constructor:third  
in ClassA destructor:second  
Hello from third A!  
in ClassA constructor:fourth  
Hello from fourth B!  
in ClassA destructor:third  
Hello from fourth A!  
in ClassA destructor:fourth  
```  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\auto_gcroot.h >  
  
 **Namespace** msclr  
  
## <a name="see-also"></a>Vedere anche  
 [Membri auto_gcroot](../dotnet/auto-gcroot-members.md)   
 [auto_gcroot::operator =](../dotnet/auto-gcroot-operator-assign.md)   
 [auto_gcroot::release](../dotnet/auto-gcroot-release.md)