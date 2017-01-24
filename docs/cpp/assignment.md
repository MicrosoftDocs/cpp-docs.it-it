---
title: "Assegnazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori di assegnazione, in overload"
  - "operatori [C++], assegnazione"
ms.assetid: d87e4f89-f8f5-42c1-9d3c-184bca9d0e15
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Assegnazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore di assegnazione \(**\=**\) è, in senso stretto, un operatore binario.  La relativa dichiarazione è identica a qualsiasi altro operatore binario, con le seguenti eccezioni:  
  
-   Deve essere una funzione membro non statica.  Nessun `operator=` può essere dichiarato come funzione non membro.  
  
-   Non è ereditato da classi derivate.  
  
-   Una funzione predefinita `operator=` può essere generata dal compilatore per i tipi di classe, se non ne esiste una. Per ulteriori informazioni sulle funzioni `operator=` predefinite, vedere [Assegnazione e inizializzazione membro per membro](http://msdn.microsoft.com/it-it/94048213-8b49-4416-8069-b1b7a6f271f9).  
  
 Nell'esempio seguente viene illustrato come dichiarare un operatore di assegnazione:  
  
```  
// assignment.cpp  
class Point  
{  
public:  
   Point &operator=( Point & );  // Right side is the argument.  
   int _x, _y;  
};  
  
// Define assignment operator.  
Point &Point::operator=( Point &ptRHS )  
{  
   _x = ptRHS._x;  
   _y = ptRHS._y;  
  
   return *this;  // Assignment operator returns left side.  
}  
  
int main()  
{  
}  
```  
  
 Si noti che l'argomento fornito è il lato destro dell'espressione.  L'operatore restituisce l'oggetto per mantenere il comportamento dell'operatore di assegnazione, che restituisce il valore del lato sinistro una volta completata l'assegnazione.  In questo modo vengono consentite istruzioni di scrittura come:  
  
```  
pt1 = pt2 = pt3;  
```  
  
## Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)