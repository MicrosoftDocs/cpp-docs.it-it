---
title: longjmp
ms.date: 08/14/2018
api_name:
- longjmp
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
- longjmp
helpviewer_keywords:
- restoring stack environment and execution locale
- longjmp function
ms.assetid: 0e13670a-5130-45c1-ad69-6862505b7a2f
ms.openlocfilehash: 4f737818afe7136262362e4fe996745064568758
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218559"
---
# <a name="longjmp"></a>longjmp

Ripristina l'ambiente dello stack e le impostazioni locali di esecuzione impostate da una `setjmp` chiamata.

## <a name="syntax"></a>Sintassi

```C
void longjmp(
   jmp_buf env,
   int value
);
```

### <a name="parameters"></a>Parametri

*ENV*<br/>
Variabile in cui è archiviato l'ambiente.

*value*<br/>
Valore da restituire alla chiamata di `setjmp`.

## <a name="remarks"></a>Osservazioni

La funzione **longjmp** ripristina un ambiente dello stack e le impostazioni locali di esecuzione salvate in precedenza in *ENV* da `setjmp` . `setjmp`e **longjmp** forniscono un modo per eseguire un non locale **`goto`** ; vengono in genere usate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni di chiamata e di ritorno normali.

Una chiamata a `setjmp` fa sì che l'ambiente dello stack corrente venga salvato in *ENV*. Una chiamata successiva a **longjmp** ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla `setjmp` chiamata corrispondente. L'esecuzione riprende come se la chiamata `setjmp` avesse appena restituito *value*. I valori di tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano quando è stato chiamato **longjmp** . I valori delle variabili di registro sono imprevedibili. Il valore restituito da `setjmp` deve essere diverso da zero. Se si passa 0 come *value*, il valore restituito effettivo viene sostituito con 1.

**Specifico di Microsoft**

Nel codice Microsoft C++ in Windows, **longjmp** usa la stessa semantica di rimozione dello stack del codice di gestione delle eccezioni. È possibile usare in modo sicuro nelle stesse posizioni in cui è possibile generare eccezioni C++. Tuttavia, questo utilizzo non è portabile e presenta alcune avvertenze importanti.

Chiamare **longjmp** solo prima che la funzione che ha chiamato `setjmp` restituisca; in caso contrario, i risultati sono imprevedibili.

Quando si usa **longjmp**, osservare le restrizioni seguenti:

- Non partire dal presupposto che i valori delle variabili di registro rimangano invariati. I valori delle variabili di registro nella chiamata di routine `setjmp` non possono essere ripristinati ai valori appropriati dopo l'esecuzione di **longjmp** .

- Non usare **longjmp** per trasferire il controllo all'esterno di una routine di gestione degli interrupt, a meno che l'interrupt non sia causato da un'eccezione a virgola mobile. In questo caso, un programma può restituire da un gestore di interrupt tramite **longjmp** se prima reinizializza il pacchetto matematico a virgola mobile chiamando [_fpreset](fpreset.md).

- Non usare **longjmp** per trasferire il controllo da una routine di callback richiamata direttamente o indirettamente dal codice di Windows.

- Se il codice viene compilato usando **/EHS** o **/EHsc** e la funzione che contiene la chiamata **longjmp** è, **`noexcept`** gli oggetti locali in tale funzione potrebbero non essere rimossi durante la rimozione dello stack.

**TERMINA specifica Microsoft**

> [!NOTE]
> Nel codice C++ portatile non è possibile presupporre `setjmp` e `longjmp` supportare la semantica degli oggetti c++. In particolare, una `setjmp` / `longjmp` coppia di chiamate presenta un comportamento non definito se sostituisce `setjmp` e `longjmp` da **`catch`** e **`throw`** Richiama qualsiasi distruttore non semplice per gli oggetti automatici. Nei programmi C++ è consigliabile usare il meccanismo di gestione delle eccezioni C++.

Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**longjmp**|\<setjmp.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_fpreset](fpreset.md).

## <a name="see-also"></a>Vedere anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[setjmp](setjmp.md)
