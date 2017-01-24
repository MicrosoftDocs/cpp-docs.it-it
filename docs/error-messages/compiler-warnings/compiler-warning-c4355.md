---
title: "Avviso del compilatore C4355 | Microsoft Docs"
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
  - "C4355"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4355"
ms.assetid: b819ecab-8a07-42d7-8fa4-1180d51626c0
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4355
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"this": utilizzato nell'elenco degli inizializzatori dei membri di base  
  
 Il puntatore **this** è valido solo all'interno di funzioni membro non static,  pertanto non può essere utilizzato nell'elenco degli inizializzatori di una classe base.  
  
 I costruttori delle classi base e dei membri di classe vengono chiamati prima del costruttore **this**.  In realtà, un puntatore a un oggetto non costruito è stato passato a un altro costruttore.  Se gli altri costruttori accedono a membri o chiamano funzioni membro su tale puntatore, si otterrà un risultato non definito.  Non utilizzare il puntatore **this** fino a quando non sono state completate tutte le costruzioni.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Il seguente codice di esempio genera l'errore C4355:  
  
```  
// C4355.cpp  
// compile with: /w14355 /c  
#include <tchar.h>  
  
class CDerived;  
class CBase {  
public:  
   CBase(CDerived *derived): m_pDerived(derived) {};  
   ~CBase();  
   virtual void function() = 0;  
  
   CDerived * m_pDerived;  
};  
  
class CDerived : public CBase {  
public:  
   CDerived() : CBase(this) {};   // C4355 "this" used in derived c'tor  
   virtual void function() {};  
};  
  
CBase::~CBase() {  
   m_pDerived -> function();  
}  
  
int main() {  
   CDerived myDerived;  
}  
```