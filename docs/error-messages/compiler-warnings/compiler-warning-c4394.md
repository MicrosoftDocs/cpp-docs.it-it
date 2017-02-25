---
title: "Avviso del compilatore C4394 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4394"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4394"
ms.assetid: 5de94de0-17e3-4e7c-92f4-5c3c1b825120
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Avviso del compilatore C4394
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': il simbolo per dominio di applicazione non dovrebbe essere contrassegnato con \_\_declspec\(dllexport\)  
  
 Una funzione contrassegnata con il modificatore [appdomain](../../cpp/appdomain.md) `__declspec` è compilata in codice MSIL e non nativo, ma le tabelle di esportazione \(modificatore [export](../../windows/export.md) `__declspec`\) non sono supportate nelle funzioni gestite.  
  
 È possibile dichiarare una funzione gestita per avere accessibilità pubblica.  Per ulteriori informazioni, vedere [Visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [Visibilità dei membri](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility).  
  
 L'avviso C4394 viene sempre generato come errore.  È possibile disattivarlo utilizzando `#pragma warning` o **\/wd**. Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4394:  
  
```  
// C4394.cpp  
// compile with: /clr /c  
__declspec(dllexport) __declspec(appdomain) int g1 = 0;   // C4394  
__declspec(dllexport) int g2 = 0;   // OK  
```