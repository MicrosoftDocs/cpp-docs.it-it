---
title: "Errore del compilatore C3836 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3836"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3836"
ms.assetid: 254f851b-7b7d-4c34-a740-fcf72f6a636a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3836
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

un costruttore static non può avere un elenco di inizializzatori di membri  
  
 Una classe gestita non può avere un costruttore statico che ha anche un elenco di inizializzazione dei membri.  I costruttori di classe statici vengono chiamati da Common Language Runtime per effettuare l'inizializzazione delle classi, tramite l'inizializzazione dei membri dati static.  
  
 Il seguente codice di esempio genera l'errore C3836:  
  
```  
// C3836a.cpp  
// compile with: /clr  
ref class M  
{  
   static int s_i;  
  
public:  
   static M() :  s_i(1234)   // C3836, delete initializer to resolve  
   {  
   }  
};  
  
int main()  
{  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3836:  
  
```  
// C3836b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class M  
{  
   static int s_i;  
  
public:  
   static M() :  s_i(1234)   // C3836, delete initializer to resolve  
   {  
   }  
};  
  
int main()  
{  
}  
```