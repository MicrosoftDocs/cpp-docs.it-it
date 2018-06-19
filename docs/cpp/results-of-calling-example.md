---
title: Risultati dell'esempio di chiamata | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 5cc5d5f96b5ffabd5397f26b6ff1372232fe0cd6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32421419"
---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
  
## <a name="cdecl"></a>__cdecl  
 Il nome decorato della funzione di C è _MyFunc "."  
  
 ![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "vc37I01")  
Convenzione di chiamata __cdecl  
  
## <a name="stdcall-and-thiscall"></a>__stdcall e thiscall  
 Nome decorato di C (`__stdcall`) è "_MyFunc@20." Il nome decorato di C++ è proprietario.  
  
 ![&#95;&#95;stdcall e convenzioni di chiamata thiscall](../cpp/media/vc37i02.gif "vc37I02")  
Convenzioni di chiamata __stdcall e thiscall  
  
## <a name="fastcall"></a>__fastcall  
 Nome decorato di C (`__fastcall`) è "@MyFunc@20." Il nome decorato di C++ è proprietario.  
  
 ![Per convenzione di chiamata &#95; &#95;fastcall](../cpp/media/vc37i03.gif "vc37I03")  
Convenzione di chiamata __fastcall  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)