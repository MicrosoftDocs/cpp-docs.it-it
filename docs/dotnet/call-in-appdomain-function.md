---
description: 'Altre informazioni su: Funzione call_in_appdomain'
title: Funzione call_in_appdomain
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- call_in_appdomain
helpviewer_keywords:
- call_in_appdomain function
ms.assetid: 9a1a5026-b76b-4cae-a3d4-29badeb9db9c
ms.openlocfilehash: ece4929e2b99b09f3c9148b50c609ec1b5596b3c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282575"
---
# <a name="call_in_appdomain-function"></a>Funzione call_in_appdomain

Esegue una funzione in un dominio applicazione specificato.

## <a name="syntax"></a>Sintassi

```
template <typename ArgType1, ...typename ArgTypeN>
void call_in_appdomain(
   DWORD appdomainId,
   void (*voidFunc)(ArgType1, ...ArgTypeN) [ ,
   ArgType1 arg1,
   ...
   ArgTypeN argN ]
);
template <typename RetType, typename ArgType1, ...typename ArgTypeN>
RetType call_in_appdomain(
   DWORD appdomainId,
   RetType (*nonvoidFunc)(ArgType1, ...ArgTypeN) [ ,
   ArgType1 arg1,
   ...
   ArgTypeN argN ]
);
```

#### <a name="parameters"></a>Parametri

*appdomainId*<br/>
AppDomain in cui chiamare la funzione.

*voidFunc*<br/>
Puntatore a una **`void`** funzione che accetta n parametri (0 <= N <= 15).

*nonvoidFunc*<br/>
Puntatore a una funzione non **`void`** che accetta n parametri (0 <= N <= 15).

*arg1... argN*<br/>
Da zero a 15 parametri da passare a `voidFunc` o `nonvoidFunc` nell'altro AppDomain.

## <a name="return-value"></a>Valore restituito

Risultato dell'esecuzione di `voidFunc` o `nonvoidFunc` nel dominio applicazione specificato.

## <a name="remarks"></a>Commenti

Gli argomenti della funzione passati a `call_in_appdomain` non devono essere tipi CLR.

## <a name="example"></a>Esempio

```cpp
// msl_call_in_appdomain.cpp
// compile with: /clr

// Defines two functions: one takes a parameter and returns nothing,
// the other takes no parameters and returns an int.  Calls both
// functions in the default appdomain and in a newly-created
// application domain using call_in_appdomain.

#include <msclr\appdomain.h>

using namespace System;
using namespace msclr;

void PrintCurrentDomainName( char* format )
{
   String^ s = gcnew String(format);
   Console::WriteLine( s, AppDomain::CurrentDomain->FriendlyName );
}

int GetDomainId()
{
   return AppDomain::CurrentDomain->Id;
}

int main()
{
   AppDomain^ appDomain1 = AppDomain::CreateDomain( "First Domain" );

   call_in_appdomain( AppDomain::CurrentDomain->Id,
                   &PrintCurrentDomainName,
                   (char*)"default appdomain: {0}" );
   call_in_appdomain( appDomain1->Id,
                   &PrintCurrentDomainName,
                   (char*)"in appDomain1: {0}" );

   int id;
   id = call_in_appdomain( AppDomain::CurrentDomain->Id, &GetDomainId );
   Console::WriteLine( "default appdomain id = {0}", id );
   id = call_in_appdomain( appDomain1->Id, &GetDomainId );
   Console::WriteLine( "appDomain1 id = {0}", id );
}
```

## <a name="output"></a>Output

```
default appdomain: msl_call_in_appdomain.exe
in appDomain1: First Domain
default appdomain id = 1
appDomain1 id = 2
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\appdomain.h>

**Spazio dei nomi** msclr
