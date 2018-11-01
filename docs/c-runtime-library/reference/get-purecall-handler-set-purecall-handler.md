---
title: _get_purecall_handler, _set_purecall_handler
ms.date: 11/04/2016
apiname:
- _set_purecall_handler
- _set_purecall_handler_m
- _get_purecall_handler
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _set_purecall_handler
- _set_purecall_handler_m
- set_purecall_handler_m
- set_purecall_handler
- stdlib/_set_purecall_handler
- stdlib/_get_purecall_handler
- _get_purecall_handler
helpviewer_keywords:
- _set_purecall_handler function
- set_purecall_handler function
- purecall_handler
- set_purecall_handler_m function
- _purecall_handler
- _set_purecall_handler_m function
- _get_purecall_handler function
ms.assetid: 2759b878-8afa-4129-86e7-72afc2153d9c
ms.openlocfilehash: 0009b4bc1c7bf70bd84b9a82ecdc8643789e8164
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50646361"
---
# <a name="getpurecallhandler-setpurecallhandler"></a>_get_purecall_handler, _set_purecall_handler

Imposta o ottiene il gestore degli errori per una chiamata alla funzione virtuale pura.

## <a name="syntax"></a>Sintassi

```cpp
typedef void (__cdecl* _purecall_handler)(void);
_purecall_handler __cdecl _get_purecall_handler(void);
_purecall_handler __cdecl _set_purecall_handler(
   _purecall_handler function
);
```

### <a name="parameters"></a>Parametri

*function*<br/>
Funzione da chiamare quando si chiama una funzione virtuale pura. Oggetto **_purecall_handler** funzione deve avere un tipo restituito void.

## <a name="return-value"></a>Valore restituito

Il precedente **_purecall_handler**. Restituisce **nullptr** se si è verificato alcun gestore precedente.

## <a name="remarks"></a>Note

Il **get_purecall_handler** e **set_purecall_handler** funzioni sono specifiche di Microsoft e si applicano solo al codice C++.

Una chiamata a una funzione virtuale pura è un errore perché non ha un'implementazione. Per impostazione predefinita, il compilatore genera codice per richiamare una funzione del gestore errori quando viene chiamata una funzione virtuale pura, che termina il programma. È possibile installare una funzione del gestore errori personalizzata per le chiamate di funzioni virtuali pure, in modo da intercettarle per il debug o la creazione di report. Per usare gestore errori personalizzato, creare una funzione che ha il **_purecall_handler** firma, quindi usare **set_purecall_handler** per renderlo il gestore corrente.

Poiché è presente una sola **_purecall_handler** per ogni processo, quando si chiama **set_purecall_handler** ha effetto immediato su tutti i thread. L'ultimo chiamante in qualsiasi thread imposta il gestore.

Per ripristinare il comportamento predefinito, chiamare **set_purecall_handler** con un **nullptr** argomento.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**get_purecall_handler**, **set_purecall_handler**|\<cstdlib> o \<stdlib.h>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// _set_purecall_handler.cpp
// compile with: /W1
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>

class CDerived;
class CBase
{
public:
   CBase(CDerived *derived): m_pDerived(derived) {};
   ~CBase();
   virtual void function(void) = 0;

   CDerived * m_pDerived;
};

class CDerived : public CBase
{
public:
   CDerived() : CBase(this) {};   // C4355
   virtual void function(void) {};
};

CBase::~CBase()
{
   m_pDerived -> function();
}

void myPurecallHandler(void)
{
   printf("In _purecall_handler.");
   exit(0);
}

int _tmain(int argc, _TCHAR* argv[])
{
   _set_purecall_handler(myPurecallHandler);
   CDerived myDerived;
}
```

```Output
In _purecall_handler.
```

## <a name="see-also"></a>Vedere anche

[Gestione degli errori](../../c-runtime-library/error-handling-crt.md)<br/>
[_purecall](purecall.md)<br/>
