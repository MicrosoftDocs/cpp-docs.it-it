---
title: "Errore degli strumenti del linker LNK2031 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2031"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2031"
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore degli strumenti del linker LNK2031
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile generare p\/invoke per nome\_decorato 'dichiarazione\_funzione'; convenzione di chiamata mancante nei metadati  
  
 Quando si tenta di importare una funzione nativa in un'immagine di tipo pure, tenere presente che le convenzioni di chiamata implicite della compilazione nativa sono diverse da quelle della compilazione pure.  Per ulteriori informazioni sulle immagini, vedere [Codice pure e verificabile](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene generato un componente con una funzione nativa esportata la cui convenzione di chiamata implicita è [\_\_cdecl](../../cpp/cdecl.md).  
  
```  
// LNK2031.cpp  
// compile with: /LD  
extern "C" {  
   __declspec(dllexport) int func() { return 3; }  
};  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene creato un client pure che utilizza la funzione nativa.  La convenzione di chiamata utilizzata in **\/clr:pure** è tuttavia [\_\_clrcall](../../cpp/clrcall.md).  Nell'esempio seguente viene generato l'errore LNK2031:  
  
```  
// LNK2031_b.cpp  
// compile with: /clr:pure LNK2031.lib  
// LNK2031 expected  
extern "C" int func();  
  
int main() {  
   return func();  
}  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato come utilizzare una funzione nativa da un'immagine pure.  Si noti l'identificatore di convenzione di chiamata esplicita **\_\_cdecl**.  
  
```  
// LNK2031_c.cpp  
// compile with: /clr:pure LNK2031.lib  
extern "C" int __cdecl func();  
  
int main() {  
   return func();  
}  
```