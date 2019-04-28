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
ms.openlocfilehash: dcd1f9002362b7726883c6ce4f74fda9ab593544
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62268048"
---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata

**Sezione specifica Microsoft**

## <a name="cdecl"></a>__cdecl

Il nome decorato della funzione C è `_MyFunc`.

![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "convenzione di chiamata CDECL") <br/>
Il **cdecl** convenzione di chiamata

## <a name="stdcall-and-thiscall"></a>__stdcall e thiscall

Nome decorato di C (**stdcall**) è `_MyFunc@20`. Il nome decorato di C++ è specifico dell'implementazione.

![&#95;&#95;stdcall e thiscall convenzioni di chiamata](../cpp/media/vc37i02.gif "&#95;&#95;stdcall e thiscall convenzioni di chiamata") <br/>
Convenzioni di chiamata __stdcall e thiscall

## <a name="fastcall"></a>__fastcall

Nome decorato di C (**fastcall**) è `@MyFunc@20`. Il nome decorato di C++ è specifico dell'implementazione.

![Per convenzione di chiamata &#95; &#95;fastcall](../cpp/media/vc37i03.gif "per la convenzione di chiamata &#95; &#95;fastcall") <br/>
Convenzione di chiamata __fastcall

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)