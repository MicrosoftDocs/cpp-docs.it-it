---
title: "Ereditariet&#224; (C++) | Microsoft Docs"
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
  - "classi [C++], derivati"
  - "classi derivate"
  - "classi derivate, informazioni su classi derivate"
ms.assetid: 3534ca19-d9ed-4a40-be1b-b921ad0e6956
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ereditariet&#224; (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa sezione viene illustrato come utilizzare le classi derivate per produrre programmi estensibili.  
  
## Panoramica  
 Le nuove classi possono essere derivate dalle classi esistenti mediante un meccanismo denominato "ereditarietà" \(vedere le informazioni fornite in [Ereditarietà singola](../cpp/single-inheritance.md)\).  Le classi utilizzate per la derivazione sono denominate "classi base" di una determinata classe derivata.  Una classe derivata viene dichiarata utilizzando la sintassi seguente:  
  
```  
 class Derived : [virtual] [access-specifier] Base  
{  
   // member list  
};  
 class Derived : [virtual] [access-specifier] Base1,  
 [virtual] [access-specifier] Base2, . . .  
{  
   // member list  
};  
```  
  
 Dopo il tag \(nome\) della classe, vengono visualizzati i due punti seguiti da un elenco di specifiche di base.  Le classi base così denominate devono essere state dichiarate in precedenza.  Le specifiche di base possono contenere un identificatore di accesso, ovvero una delle parole chiave **public**, `protected` o `private`.  Gli identificatori di accesso vengono visualizzati prima del nome della classe base e si applicano solo a tale classe.  Questi identificatori controllano l'autorizzazione della classe derivata a utilizzare i membri della classe base.  Per informazioni sull'accesso ai membri della classe base, vedere [Controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md).  Se l'identificatore di accesso viene omesso, l'accesso a tale base viene considerato `private`.  Le specifiche di base possono contenere la parola chiave **virtual** per indicare l'ereditarietà virtuale.  Questa parola chiave può essere visualizzata prima o dopo l'identificatore di accesso, se presente.  Se viene utilizzata l'ereditarietà virtuale, la classe base viene definita come una classe base virtuale.  Per ulteriori informazioni, vedere [Classi base virtuali](../misc/virtual-base-classes.md).  
  
 È possibile specificare più classi base, separandole con virgole.  Se si specifica una classe singola, il modello di ereditarietà è [Ereditarietà singola](../cpp/single-inheritance.md). Se si specificano più classi base, il modello di ereditarietà è denominato [Ereditarietà multipla](http://msdn.microsoft.com/it-it/3b74185e-2beb-4e29-8684-441e51d2a2ca),  
  
 Sono inclusi i seguenti argomenti:  
  
-   [Eredità singola](../cpp/single-inheritance.md)  
  
-   [Ereditarietà multipla](http://msdn.microsoft.com/it-it/3b74185e-2beb-4e29-8684-441e51d2a2ca)  
  
-   [Classi di base multiple](../cpp/multiple-base-classes.md)  
  
-   [Classi di base virtuali](../misc/virtual-base-classes.md)  
  
-   [Funzioni virtuali](../cpp/virtual-functions.md)  
  
-   [Override espliciti](../cpp/explicit-overrides-cpp.md)  
  
-   [Classi astratte](../cpp/abstract-classes-cpp.md)  
  
-   [Riepilogo delle regole di ambito](../cpp/summary-of-scope-rules.md)  
  
 Le parole chiave [\_\_interface](../cpp/super.md) e [\_\_super](../cpp/interface.md) sono illustrate in questa sezione.  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)