---
title: setjmp
description: Informazioni di riferimento sulle API per setjmp; che consente di salvare lo stato corrente del programma.
ms.date: 08/14/2018
api_name:
- setjmp
api_location:
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- setjmp
helpviewer_keywords:
- programs [C++], saving states
- current state
- setjmp function
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
ms.openlocfilehash: 3ea08e5379433e313e08870f735322b7d985aa64
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555605"
---
# <a name="setjmp"></a>setjmp

Salva lo stato corrente del programma.

## <a name="syntax"></a>Sintassi

```C
int setjmp(
   jmp_buf env
);
```

### <a name="parameters"></a>Parametri

*ENV*<br/>
Variabile in cui è archiviato l'ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 dopo aver salvato l'ambiente dello stack. Se **setjmp** restituisce come risultato di una `longjmp` chiamata, restituisce l'argomento *value* di `longjmp` o se l'argomento *value* di `longjmp` è 0, **setjmp** restituisce 1. Non viene restituito alcun errore.

## <a name="remarks"></a>Osservazioni

La funzione **setjmp** salva un ambiente dello stack, che può essere successivamente ripristinato utilizzando `longjmp` . Se usati insieme, **setjmp** e `longjmp` forniscono un modo per eseguire un non locale **`goto`** . In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni normali di chiamata o restituzione.

Una chiamata a **setjmp** Salva l'ambiente dello stack corrente in *ENV*. Una chiamata successiva a `longjmp` Ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla chiamata **setjmp** corrispondente. Tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano quando `longjmp` è stato chiamato.

Non è possibile usare **setjmp** per passare dal codice nativo al codice gestito.

**Specifico di Microsoft**

Nel codice Microsoft C++ in Windows, **longjmp** usa la stessa semantica di rimozione dello stack del codice di gestione delle eccezioni. È possibile usare in modo sicuro nelle stesse posizioni in cui è possibile generare eccezioni C++. Tuttavia, questo utilizzo non è portabile e presenta alcune avvertenze importanti. Per informazioni dettagliate, vedere [longjmp](longjmp.md).

**TERMINA specifica Microsoft**

> [!NOTE]
> Nel codice C++ portatile non è possibile presupporre `setjmp` e `longjmp` supportare la semantica degli oggetti c++. In particolare, una `setjmp` / `longjmp` coppia di chiamate presenta un comportamento non definito se sostituisce `setjmp` e `longjmp` da **`catch`** e **`throw`** Richiama qualsiasi distruttore non semplice per gli oggetti automatici. Nei programmi C++ è consigliabile usare il meccanismo di gestione delle eccezioni C++.

Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**setjmp**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_fpreset](fpreset.md).

## <a name="see-also"></a>Vedere anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[longjmp](longjmp.md)
