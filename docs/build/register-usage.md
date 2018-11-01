---
title: Utilizzo dei registri
ms.date: 11/04/2016
ms.assetid: ce58e2cf-afd3-4068-980e-28a209298265
ms.openlocfilehash: fa04318ad4af298f300fbbbad8c01d0df9500ec7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50629983"
---
# <a name="register-usage"></a>Utilizzo dei registri

X64 architettura fornisce 16 registri per utilizzo generico (in seguito indicati come registri integer), nonché 16 registri XMM/YMM registra disponibili per l'uso con virgola mobile. I registri volatili sono registri temporanei che il chiamante suppone vengano eliminati definitivamente con una chiamata. I registri non volatili devono conservare i relativi valori durante le chiamate di funzione e, se usati, devono essere salvati dal chiamante.

## <a name="register-volatility-and-preservation"></a>Registrare la volatilità e conservazione

Nella tabella seguente viene descritto il modo in cui ogni registro viene usato durante le chiamate di funzione:

||||
|-|-|-|
|Registrazione|Stato|Utilizzo|
|RAX|Volatile|Registro del valore restituito|
|RCX|Volatile|Primo argomento Integer|
|RDX|Volatile|Secondo argomento Integer|
|R8|Volatile|Terzo argomento Integer|
|R9|Volatile|Quarto argomento Integer|
|R10:R11|Volatile|Deve essere mantenuto in base alle esigenze del chiamante. Viene usato nelle istruzioni syscall/sysret.|
|R12:R15|Non volatile|Deve essere mantenuto dal chiamato.|
|RDI|Non volatile|Deve essere mantenuto dal chiamato.|
|RSI|Non volatile|Deve essere mantenuto dal chiamato.|
|RBX|Non volatile|Deve essere mantenuto dal chiamato.|
|RBP|Non volatile|Può essere usato come puntatore ai frame. Deve essere mantenuto dal chiamato.|
|RSP|Non volatile|Puntatore dello stack|
|XMM0, YMM0|Volatile|Primo argomento FP; primo argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM1, YMM1|Volatile|Secondo argomento FP; secondo argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM2, YMM2|Volatile|Terzo argomento FP; terzo argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM3, YMM3|Volatile|Quarto argomento FP; quarto argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM4, YMM4|Volatile|Deve essere mantenuto in base alle esigenze del chiamante; quinto argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM5, YMM5|Volatile|Deve essere mantenuto in base alle esigenze del chiamante; sesto argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM6:XMM15, YMM6:YMM15|Non volatile (XMM), volatile (metà superiore di YMM)|Deve essere mantenuto dal chiamato. I registri YMM devono essere mantenuti in base alle esigenze del chiamante.|

In uscita dalla funzione e in ingresso nella funzione di libreria di Runtime C chiamate e le chiamate di sistema di Windows, il flag di direzione della CPU dovrebbe register flag da cancellare.

## <a name="see-also"></a>Vedere anche

- [Convenzioni del software x64](../build/x64-software-conventions.md)
- [__vectorcall](../cpp/vectorcall.md)
- [Flag di direzione](../c-runtime-library/direction-flag.md)
