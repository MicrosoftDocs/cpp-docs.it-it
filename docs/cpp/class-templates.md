---
title: "Modelli di classe | Microsoft Docs"
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
  - "modelli di classe"
  - "classi [C++], utilizzo con il tipo"
  - "modelli, modelli di classe"
ms.assetid: 633a53c8-24ee-4c23-8c88-e7c3cb0b7ac3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Modelli di classe
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare i modelli di classe per creare un gruppo di classi che agiscono su un tipo.  I modelli di classe sono tipi con parametri.  Essi implicano che è possibile creare una classe separata per qualsiasi valore dei parametri \(noto come argomento di modello\) passato.  
  
 Gli argomenti di modello possono essere tipi o valori costanti di un tipo specificato.  Ad esempio:  
  
```  
// class_templates.cpp  
template <class T, int i> class TempClass   
{  
public:  
    TempClass( void );  
    ~TempClass( void );  
    int MemberSet( T a, int b );  
private:  
    T Tarray[i];  
    int arraysize;  
};  
  
int main()  
{  
}  
```  
  
 In questo esempio la classe basata su modelli utilizza due parametri, un tipo `T` e un int `i`.  Il parametro `T` può essere passato a qualsiasi tipo, incluse le strutture e le classi.  Il parametro `i` deve essere passato a una costante Integer.  Poiché `i` è una costante definita in fase di compilazione, è possibile definire una matrice di membro di dimensione `i` utilizzando una dichiarazione di matrice standard.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Membri dei modelli di classe](../Topic/Members%20of%20Class%20Templates.md)  
  
-   [Modelli per membri di classi](../Topic/Templates%20for%20Class%20Members.md)  
  
-   [Funzioni membro delle classi di modelli](../Topic/Member%20Functions%20of%20Template%20Classes.md)  
  
-   [Modelli di classe annidati](../Topic/Nested%20Class%20Templates.md)  
  
-   [Creazione di istanze dei modelli di classe](../Topic/Class%20Template%20Instantiation.md)  
  
-   [Specializzazione esplicita di modelli di classe](../Topic/Explicit%20Specialization%20of%20Class%20Templates.md)  
  
-   [Specializzazione parziale dei modelli classe](../cpp/template-specialization-cpp.md)  
  
-   [Argomenti predefiniti per modelli di classe](../Topic/Default%20Arguments%20for%20Class%20Templates.md)  
  
-   [Elementi friend di modelli](../cpp/template-friends.md)  
  
## Vedere anche  
 [Modelli](../cpp/templates-cpp.md)