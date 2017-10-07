---
title: Risultati dell'esempio di chiamata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5a1d6bf1c1d3cf2a57a74b7994766e940488a8e8
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="results-of-calling-example"></a>Esempio di risultati di chiamata
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
  
## <a name="cdecl"></a>__cdecl  
 Il nome decorato della funzione di C è _MyFunc "."  
  
 ![Convenzione di chiamata CDECL](../cpp/media/vc37i01.gif "vc37I01")  
Convenzione di chiamata __cdecl  
  
## <a name="stdcall-and-thiscall"></a>__stdcall e thiscall  
 Nome decorato di C (`__stdcall`) è "_MyFunc@20." Il nome decorato di C++ è proprietario.  
  
 ![&#95; &#95; stdcall e convenzioni di chiamata thiscall](../cpp/media/vc37i02.gif "vc37I02")  
Convenzioni di chiamata __stdcall e thiscall  
  
## <a name="fastcall"></a>__fastcall  
 Nome decorato di C (`__fastcall`) è "@MyFunc@20." Il nome decorato di C++ è proprietario.  
  
 ![Convenzione di chiamata per &#95; &#95; fastcall](../cpp/media/vc37i03.gif "vc37I03")  
Convenzione di chiamata __fastcall  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)
