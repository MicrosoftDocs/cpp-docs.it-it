---
title: setjmp
description: Informazioni di riferimento sulle API per setjmp; che consente di salvare lo stato corrente del programma.
ms.date: 1/14/2021
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 0830cf253553523747a815efc950d4cf75b36647
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242644"
---
# `setjmp`

Salva lo stato corrente del programma.

## <a name="syntax"></a>Sintassi

```C
int setjmp(
   jmp_buf env
);
```

### <a name="parameters"></a>Parametri

*`env`*\
Variabile in cui è archiviato l'ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 dopo aver salvato l'ambiente dello stack. Se **`setjmp`** restituisce a causa di una `longjmp` chiamata, restituisce l'argomento del *valore* di `longjmp` o se l'argomento del *valore* di `longjmp` è 0, **`setjmp`** restituisce 1. Non viene restituito alcun errore.

## <a name="remarks"></a>Commenti

La **`setjmp`** funzione salva un ambiente dello stack, che può essere successivamente ripristinato utilizzando `longjmp` . Quando vengono usati insieme, **`setjmp`** e `longjmp` consentono di eseguire un'istruzione non locale **`goto`** . Vengono in genere usate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le normali convenzioni di chiamata o di restituzione.

Una chiamata a **`setjmp`** Salva l'ambiente corrente dello stack in *`env`* . Una chiamata successiva a `longjmp` Ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla **`setjmp`** chiamata corrispondente. Tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano quando `longjmp` è stato chiamato.

Non è possibile usare **`setjmp`** per passare dal codice nativo al codice gestito.

**Specifico di Microsoft**

Nel codice Microsoft C++ in Windows, **`longjmp`** Usa la stessa semantica di rimozione dello stack del codice di gestione delle eccezioni. È possibile usare in modo sicuro nelle stesse posizioni in cui è possibile generare eccezioni C++. Tuttavia, questo utilizzo non è portabile e presenta alcune avvertenze importanti. Per informazioni dettagliate, vedere [`longjmp`](longjmp.md).

**TERMINA specifica Microsoft**

> [!NOTE]
> Nel codice C++ portatile non è possibile presupporre `setjmp` e `longjmp` supportare la semantica degli oggetti c++. In particolare, una `setjmp` / `longjmp` coppia di chiamate presenta un comportamento non definito se sostituisce `setjmp` e `longjmp` da **`catch`** e **`throw`** Richiama qualsiasi distruttore non semplice per gli oggetti automatici. Nei programmi C++ è consigliabile usare il meccanismo di gestione delle eccezioni C++.

Per ulteriori informazioni, vedere [utilizzo `setjmp` di `longjmp` e ](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`setjmp`**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [`_fpreset`](fpreset.md) .

## <a name="see-also"></a>Vedere anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)\
[`longjmp`](longjmp.md)
