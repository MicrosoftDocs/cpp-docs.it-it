---
description: 'Altre informazioni su: risultati della chiamata di esempio'
title: Esempio di risultati di chiamata
ms.date: 11/19/2018
helpviewer_keywords:
- examples [C++], results of calling
- results, thiscall call
- results, __fastcall keyword call
- results, __cdecl call
- results, __stdcall call
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
ms.openlocfilehash: 91da3182742414dc4850013463b74ae36aa782c0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262919"
---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata

**Specifico di Microsoft**

## <a name="__cdecl"></a>__cdecl

Il nome della funzione decorata C è `_MyFunc` .

![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "Convenzione di chiamata CDECL") <br/>
**`__cdecl`** Convenzione di chiamata

## <a name="__stdcall-and-thiscall"></a>__stdcall e thiscall

Il nome decorato di C ( **`__stdcall`** ) è `_MyFunc@20` . Il nome decorato C++ è specifico dell'implementazione.

![&#95;&#95;le convenzioni di chiamata stdcall e thiscall](../cpp/media/vc37i02.gif "&#95;&#95;le convenzioni di chiamata stdcall e thiscall") <br/>
Convenzioni di chiamata __stdcall e thiscall

## <a name="__fastcall"></a>__fastcall

Il nome decorato di C ( **`__fastcall`** ) è `@MyFunc@20` . Il nome decorato C++ è specifico dell'implementazione.

![Convenzione di chiamata per &#95;&#95;fastcall](../cpp/media/vc37i03.gif "Convenzione di chiamata per &#95;&#95;fastcall") <br/>
Convenzione di chiamata __fastcall

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Esempio di chiamata: prototipo di funzione e chiamata](../cpp/calling-example-function-prototype-and-call.md)
