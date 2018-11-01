---
title: Esempio di risultati di chiamata
ms.date: 09/05/2018
helpviewer_keywords:
- examples [C++], results of calling
- results, thiscall call
- results, __fastcall keyword call
- results, __cdecl call
- results, __stdcall call
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
ms.openlocfilehash: 96582e48912bb591d869bbc4df179299e6459f1e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50500938"
---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata

**Sezione specifica Microsoft**

## <a name="cdecl"></a>__cdecl

Il nome decorato della funzione C è `_MyFunc`.

![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "vc37I01") il **cdecl** convenzione di chiamata

## <a name="stdcall-and-thiscall"></a>__stdcall e thiscall

Nome decorato di C (**stdcall**) è `_MyFunc@20`. Il nome decorato di C++ è specifico dell'implementazione.

![&#95;&#95;stdcall e thiscall convenzioni di chiamata](../cpp/media/vc37i02.gif "vc37I02") di stdcall e thiscall convenzioni di chiamata

## <a name="fastcall"></a>__fastcall

Nome decorato di C (**fastcall**) è `@MyFunc@20`. Il nome decorato di C++ è specifico dell'implementazione.

![Per convenzione di chiamata &#95; &#95;fastcall](../cpp/media/vc37i03.gif "vc37I03") convenzione di chiamata fastcall

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)