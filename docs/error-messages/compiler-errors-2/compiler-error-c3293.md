---
title: "Errore del compilatore C3293 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3293"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3293"
ms.assetid: b772cf98-52e0-4e24-be23-1f5d87d999ac
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3293
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'accessor': usare 'default' per accedere alla proprietà predefinita \(indexer\) per la classe 'type'  
  
 L'accesso a una proprietà indicizzata non è stato eseguito correttamente.  Per altre informazioni, vedere [Procedura: utilizzare proprietà indicizzate](../../misc/how-to-use-indexed-properties.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3293.  
  
```  
// C3293.cpp // compile with: /clr /c using namespace System; ref class IndexerClass { public: // default indexer property int default[int] { int get(int index) { return 0; } void set(int index, int value) {} } }; int main() { IndexerClass ^ ic = gcnew IndexerClass; ic->Item[0] = 21;   // C3293 ic->default[0] = 21;   // OK String ^s = "Hello"; wchar_t wc = s->Chars[0];   // C3293 wchar_t wc2 = s->default[0];   // OK Console::WriteLine(wc2); }  
```