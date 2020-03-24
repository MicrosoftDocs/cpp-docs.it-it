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
ms.openlocfilehash: edbeb187e568b833673d91ef70ff57fbd460659c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179055"
---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata

**Sezione specifica Microsoft**

## <a name="__cdecl"></a>__cdecl

Il nome della funzione decorata C è `_MyFunc`.

![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "Convenzione di chiamata CDECL") <br/>
Convenzione di chiamata **__cdecl**

## <a name="__stdcall-and-thiscall"></a>__stdcall e thiscall

Il nome decorato C ( **__stdcall**) è `_MyFunc@20`. Il C++ nome decorato è specifico dell'implementazione.

![&#95;&#95;convenzioni di chiamata stdcall e thiscall](../cpp/media/vc37i02.gif "&#95;&#95;convenzioni di chiamata stdcall e thiscall") <br/>
Convenzioni di chiamata __stdcall e thiscall

## <a name="__fastcall"></a>__fastcall

Il nome decorato C ( **__fastcall**) è `@MyFunc@20`. Il C++ nome decorato è specifico dell'implementazione.

![Convenzione di chiamata &#95; &#95;per fastcall](../cpp/media/vc37i03.gif "Convenzione di chiamata &#95; &#95;per fastcall") <br/>
Convenzione di chiamata __fastcall

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)
