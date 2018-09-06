---
title: Risultati dell'esempio di chiamata | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- examples [C++], results of calling
- results, thiscall call
- results, __fastcall keyword call
- results, __cdecl call
- results, __stdcall call
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5687adfada8657ae26edd9001db8990ff08864e9
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894695"
---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata

**Sezione specifica Microsoft**

## <a name="cdecl"></a>__cdecl
Il nome decorato della funzione C è `_MyFunc`.

![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "vc37I01")  
Il **cdecl** convenzione di chiamata

## <a name="stdcall-and-thiscall"></a>__stdcall e thiscall

Nome decorato di C (**stdcall**) è `_MyFunc@20`. Il nome decorato di C++ è specifico dell'implementazione.

![&#95;&#95;stdcall e thiscall convenzioni di chiamata](../cpp/media/vc37i02.gif "vc37I02")  
Convenzioni di chiamata __stdcall e thiscall

## <a name="fastcall"></a>__fastcall

Nome decorato di C (**fastcall**) è `@MyFunc@20`. Il nome decorato di C++ è specifico dell'implementazione.

![Per convenzione di chiamata &#95; &#95;fastcall](../cpp/media/vc37i03.gif "vc37I03")  
Convenzione di chiamata __fastcall

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)