---
title: _com_ptr_t::_com_ptr_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::_com_ptr_t
dev_langs:
- C++
helpviewer_keywords:
- _com_ptr_t method [C++]
ms.assetid: 0c00620a-28d2-4f60-ae4a-1696be36137e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 198194093bb91c00a80fa9ece053cd545a56e6ad
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055251"
---
# <a name="comptrtcomptrt"></a>_com_ptr_t::_com_ptr_t

**Sezione specifica Microsoft**

Costruisce un **com_ptr_t** oggetto.

## <a name="syntax"></a>Sintassi

```
// Default constructor.
// Constructs a NULL smart pointer.
_com_ptr_t() throw();

// Constructs a NULL smart pointer. The NULL argument must be zero.
_com_ptr_t( 
   int null 
);

// Constructs a smart pointer as a copy of another instance of the
// same smart pointer. AddRef is called to increment the reference
// count for the encapsulated interface pointer.
_com_ptr_t( 
   const _com_ptr_t& cp 
) throw();

// Move constructor (Visual Studio 2015 Update 3 and later)
_com_ptr_t(_com_ptr_t&& cp) throw();

// Constructs a smart pointer from a raw interface pointer of this
// smart pointer's type. If fAddRef is true, AddRef is called
// to increment the reference count for the encapsulated
// interface pointer. If fAddRef is false, this constructor
// takes ownership of the raw interface pointer without calling AddRef.
_com_ptr_t( 
   Interface* pInterface, 
   bool fAddRef 
) throw();

// Construct pointer for a _variant_t object.
// Constructs a smart pointer from a _variant_t object. The
// encapsulated VARIANT must be of type VT_DISPATCH or VT_UNKNOWN, or
// it can be converted into one of these two types. If QueryInterface
// fails with an E_NOINTERFACE error, a NULL smart pointer is
// constructed.
_com_ptr_t( 
   const _variant_t& varSrc 
);

// Constructs a smart pointer given the CLSID of a coclass. This
// function calls CoCreateInstance, by the member function
//  CreateInstance, to create a new COM object and then queries for
// this smart pointer's interface type. If QueryInterface fails with
// an E_NOINTERFACE error, a NULL smart pointer is constructed.
explicit _com_ptr_t( 
   const CLSID& clsid,  
   IUnknown* pOuter = NULL,  
   DWORD dwClsContext = CLSCTX_ALL 
);

// Calls CoCreateClass with provided CLSID retrieved from string.
explicit _com_ptr_t( 
   LPCWSTR str,  
   IUnknown* pOuter = NULL,  
   DWORD dwClsContext = CLSCTX_ALL 
);

// Constructs a smart pointer given a multibyte character string that
// holds either a CLSID (starting with "{") or a ProgID. This function
// calls CoCreateInstance, by the member function CreateInstance, to
// create a new COM object and then queries for this smart pointer's
// interface type. If QueryInterface fails with an E_NOINTERFACE error,
// a NULL smart pointer is constructed.
explicit _com_ptr_t( 
   LPCSTR str, 
   IUnknown* pOuter = NULL, 
   DWORD dwClsContext = CLSCTX_ALL 
);

// Saves the interface.
template<>  
_com_ptr_t( 
   Interface* pInterface 
) throw();

// Make sure correct ctor is called
template<>  
_com_ptr_t( 
   LPSTR str 
);

// Make sure correct ctor is called
template<>  
_com_ptr_t( 
   LPWSTR str 
);

// Constructs a smart pointer from a different smart pointer type or
// from a different raw interface pointer. QueryInterface is called to
// find an interface pointer of this smart pointer's type. If
// QueryInterface fails with an E_NOINTERFACE error, a NULL smart
// pointer is constructed.
template<typename _OtherIID>  
_com_ptr_t( 
   const _com_ptr_t<_OtherIID>& p 
);

// Constructs a smart-pointer from any IUnknown-based interface pointer.
template<typename _InterfaceType> 
_com_ptr_t( 
   _InterfaceType* p 
);

// Disable conversion using _com_ptr_t* specialization of
// template<typename _InterfaceType> _com_ptr_t(_InterfaceType* p)
template<>  
explicit _com_ptr_t( 
   _com_ptr_t* p 
);
```

#### <a name="parameters"></a>Parametri

*pInterface*<br/>
Puntatore a interfaccia raw.

*fAddRef*<br/>
Se TRUE, `AddRef` viene chiamato per incrementare il conteggio dei riferimenti del puntatore a interfaccia incapsulato.

*CP*<br/>
Oggetto **com_ptr_t** oggetto.

*p*<br/>
Un puntatore a interfaccia raw, tipo relativo diverso dal tipo di puntatore intelligente di questo **com_ptr_t** oggetto.

*varSrc*<br/>
Oggetto `_variant_t`.

*clsid*<br/>
Il `CLSID` di una coclasse.

*dwClsContext*<br/>
Contesto del codice eseguibile in esecuzione.

*lpcStr*<br/>
Stringa multibyte che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.

*pOuter*<br/>
Unknown esterno di [aggregazione](/windows/desktop/com/aggregation).

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)