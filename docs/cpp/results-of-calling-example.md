---
title: "Esempio di risultati di chiamata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "esempi [C++], risultati della chiamata"
  - "risultati, __cdecl (chiamata)"
  - "risultati, __fastcall (chiamata della parola chiave)"
  - "risultati, __stdcall (chiamata)"
  - "risultati, thiscall (chiamata)"
ms.assetid: aa70a7cb-ba1d-4aa6-bd0a-ba783da2e642
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Esempio di risultati di chiamata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
  
## \_\_cdecl  
 Il nome decorato della funzione di C è \_MyFunc "."  
  
 ![Convenzione di chiamata CDECL](../cpp/media/vc37i01.png "vc37I01")  
Convenzione di chiamata \_\_cdecl  
  
## \_\_stdcall e thiscall  
 Il nome decorato di C \(`__stdcall`\) è "\_MyFunc@20." Il nome decorato di C\+\+ è proprietario.  
  
 ![Convenzioni di chiamata &#95;&#95;stdcall e thiscall](../cpp/media/vc37i02.png "vc37I02")  
Convenzioni di chiamata \_\_stdcall e thiscall  
  
## \_\_fastcall  
 Il nome decorato di C \(`__fastcall`\) è "@MyFunc@20." Il nome decorato di C\+\+ è proprietario.  
  
 ![Convenzione di chiamata per &#95;&#95;fastcall](../cpp/media/vc37i03.png "vc37I03")  
Convenzione di chiamata \_\_fastcall  
  
### Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Esempio di chiamata: prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)