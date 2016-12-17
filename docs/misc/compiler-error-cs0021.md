---
title: "Errore del compilatore CS0021 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0021"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0021"
ms.assetid: 4eb5fa24-8261-4962-b36a-224be5074217
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0021
Impossibile applicare l'indicizzazione con \[\] a un'espressione di tipo 'type'  
  
 Si è provato ad accedere a un valore tramite l'applicazione di un indicizzatore a un tipo di dati che non supporta [Indicizzatori](../Topic/Indexers%20\(C%23%20Programming%20Guide\).md).  
  
 L'errore CS0021 può essere generato se si prova a usare un indicizzatore in un assembly C\+\+. In questo caso, contrassegnare la classe C\+\+ con l'attributo `DefaultMember` per indicare al compilatore C\# l'indicizzatore predefinito. L'esempio seguente genera l'errore CS0021.  
  
## Esempio  
 Il seguente file viene compilato in un file DLL, con l'attributo `DefaultMember` impostato come commento, in modo da generare l'errore.  
  
```  
// CPP0021.cpp // compile with: /clr /LD using namespace System::Reflection; // Uncomment the following line to resolve //[DefaultMember("myItem")] public ref class MyClassMC { public: property int myItem[int] { int get(int i){  return 5; } void set(int i, int value) {} } };  
```  
  
## Esempio  
 Il seguente file C\# esegue la chiamata del file DLL. Questo file prova a accedere alla classe con un indicizzatore, ma dal momento che nessun membro è stato dichiarato come l'indicizzatore predefinito da usare, viene generato l'errore.  
  
```  
// CS0021.cs // compile with: /reference:CPP0021.dll public class MyClass { public static void Main() { MyClassMC myMC = new MyClassMC(); int j = myMC[1]; // CS0021 } }  
```