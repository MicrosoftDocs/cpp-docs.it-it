---
title: setjmp
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
ms.openlocfilehash: 4a88467f5b94ceae4281a35f1486380a877be2e5
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70948252"
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

*env*<br/>
Variabile in cui è archiviato l'ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 dopo aver salvato l'ambiente dello stack. Se **setjmp** restituisce come risultato di una `longjmp` chiamata, restituisce l'argomento *value* di `longjmp`o se l'argomento *value* di `longjmp` è 0, **setjmp** restituisce 1. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

La funzione **setjmp** salva un ambiente dello stack, che può essere successivamente ripristinato `longjmp`utilizzando. Se usati insieme, **setjmp** e `longjmp` forniscono un modo per eseguire un'istruzione **goto**non locale. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni normali di chiamata o restituzione.

Una chiamata a **setjmp** Salva l'ambiente dello stack corrente in *ENV*. Una chiamata successiva a `longjmp` ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla chiamata **setjmp** corrispondente. Tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano quando `longjmp` è stato chiamato.

Non è possibile usare **setjmp** per passare dal codice nativo al codice gestito.

**Sezione specifica Microsoft**

In Microsoft C++ code in Windows, **longjmp** usa la stessa semantica di rimozione dello stack del codice di gestione delle eccezioni. È possibile usare in modo sicuro nelle stesse posizioni in C++ cui è possibile generare eccezioni. Tuttavia, questo utilizzo non è portabile e presenta alcune avvertenze importanti. Per informazioni dettagliate, vedere [longjmp](longjmp.md).

**Fine sezione specifica Microsoft**

> [!NOTE]
> Nel codice C++ portatile non è possibile `setjmp` presupporre `longjmp` e C++ supportare la semantica degli oggetti. In particolare, `setjmp` una coppia di chiamate presenta un / `longjmp` comportamento non definito `setjmp` se `longjmp` la sostituzione di e di **catch** e **throw** richiama qualsiasi distruttore non semplice per gli oggetti automatici. Nei C++ programmi, si consiglia di utilizzare il C++ meccanismo di gestione delle eccezioni.

Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**setjmp**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_fpreset](fpreset.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[longjmp](longjmp.md)
