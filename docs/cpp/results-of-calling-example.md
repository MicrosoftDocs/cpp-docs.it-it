---
title: Esempio di risultati di chiamata
ms.date: 11/19/2018
helpviewer_keywords:
- examples [C++], results of calling
- results, thiscall call
- results, __fastcall keyword call
- results, __cdecl call
- results, __stdcall call
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
ms.openlocfilehash: 1bf5fe62b8ef2b7a37bf72b7a40e5d47af3f3961
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225878"
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

## <a name="see-also"></a>Vedere anche

[Esempio di chiamata: prototipo di funzione e chiamata](../cpp/calling-example-function-prototype-and-call.md)
