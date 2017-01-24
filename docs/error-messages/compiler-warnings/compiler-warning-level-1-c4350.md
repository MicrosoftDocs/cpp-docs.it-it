---
title: "Avviso del compilatore (livello 1) C4350 | Microsoft Docs"
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
  - "C4350"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4350"
ms.assetid: 4cc8ed67-64c4-4da5-a7a5-a639232baa23
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4350
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

modifica del comportamento: viene chiamato 'membro1' anziché 'membro2'  
  
 Non è possibile associare un valore rvalue a un riferimento non const.  Nelle versioni di Visual C\+\+ precedenti era consentito associare un valore rvalue a un riferimento non const in un'inizializzazione diretta.  Il codice ora genera un avviso.  
  
 Per la compatibilità con le versioni precedenti, l'associazione di valori rvalue a riferimenti non const è ancora ammessa, ma è preferibile utilizzare le conversioni standard, se possibile.  
  
 L'avviso rappresenta una modifica del comportamento rispetto al compilatore di Visual C\+\+ .NET 2002 e,  se attivato, consente di esaminare la correttezza del codice.  L'avviso può ad esempio essere generato quando si utilizza la classe modello **std::auto\_ptr**.  
  
 Se si visualizza questo avviso, esaminare il codice per verificare se l'avviso è stato generato a causa di un'associazione di valori rvalue a riferimenti non const.  Aggiungendo const al riferimento o specificando un overload del riferimento const aggiuntivo, sarà possibile risolvere il problema.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Il seguente codice di esempio genera l'errore C4350:  
  
```  
// C4350.cpp  
// compile with: /W1  
#pragma warning (default : 4350)  
class A {};  
  
class B  
{  
public:  
   B(B&){}  
   // try the following instead  
   // B(const B&){}  
  
   B(A){}  
   operator A(){ return A();}  
};  
  
B source() { return A(); }  
  
int main()  
{  
   B ap(source());   // C4350  
}  
```