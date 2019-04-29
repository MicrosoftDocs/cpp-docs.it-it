---
title: setjmp
ms.date: 08/14/2018
apiname:
- setjmp
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
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- setjmp
helpviewer_keywords:
- programs [C++], saving states
- current state
- setjmp function
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
ms.openlocfilehash: 9f1a2b71a7b8fc7603c36938879348dca16288e2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62356420"
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

Restituisce 0 dopo aver salvato l'ambiente dello stack. Se **setjmp** restituisce come risultato di una `longjmp` chiamare, viene restituito il *valore* argomento del `longjmp`, oppure se il *valore* argomento di `longjmp` è 0, **setjmp** restituisce 1. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Il **setjmp** funzione Salva un ambiente dello stack che successivamente è possibile ripristinare, usando `longjmp`. Se usati insieme, **setjmp** e `longjmp` consentono di eseguire non in locale **goto**. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni normali di chiamata o restituzione.

Una chiamata a **setjmp** Salva l'ambiente dello stack corrente in *env*. Una chiamata successiva al `longjmp` Ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla corrispondente **setjmp** chiamare. Tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano quando `longjmp` è stato chiamato.

Non è possibile usare **setjmp** per passare dal codice nativo a codice gestito.

**Sezione specifica Microsoft**

Nel codice C++ di Microsoft su Windows, **longjmp** utilizza la stessa semantica di rimozione dello stack come codice di gestione delle eccezioni. È possibile usare esattamente negli stessi scenari che possono essere generate le eccezioni C++. Tuttavia, questo uso non è portabile e viene fornito con alcuni avvertimenti importanti relativi. Per informazioni dettagliate, vedere [longjmp](longjmp.md).

**Fine sezione specifica Microsoft**

> [!NOTE]
> Nel codice C++ portabile, è possibile presupporre `setjmp` e `longjmp` supportano la semantica degli oggetti C++. In particolare, un `setjmp` / `longjmp` chiamata coppia produce un comportamento indefinito se sostituendo il `setjmp` e `longjmp` da **catch** e **throw** invocherebbe eventuali distruttori non semplici per gli oggetti automatici. Nei programmi C++, è consigliabile che usare il meccanismo di gestione delle eccezioni C++.

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
