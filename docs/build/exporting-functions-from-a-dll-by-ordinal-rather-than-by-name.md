---
title: "Esportazione di funzioni da una DLL in base al numero ordinale anzich&#233; al nome | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "NONAME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "esportazione di DLL [C++], valori ordinali"
  - "esportazione di funzioni [C++], valori ordinali"
  - "NONAME (attributo)"
  - "esportazioni ordinali [C++]"
ms.assetid: 679719fd-d965-4df3-9f7a-7d86ad831702
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esportazione di funzioni da una DLL in base al numero ordinale anzich&#233; al nome
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il metodo più semplice per esportare le funzioni dalla DLL consiste nell'esportarle in base al nome.  Ciò avviene, ad esempio, quando si utilizza **\_\_declspec\(dllexport\)**.  È altresì possibile esportare le funzioni per ordinale.  Con questa tecnica, è necessario utilizzare un file def anziché **\_\_declspec\(dllexport\)**.  Per specificare il valore ordinale di una funzione, aggiungere il relativo ordinale al nome della funzione nel file def.  Per informazioni sulla specifica degli ordinali, vedere [Esportazione da una DLL tramite i file DEF](../build/exporting-from-a-dll-using-def-files.md).  
  
> [!TIP]
>  Se si desidera ottimizzare le dimensioni del file DLL, utilizzare l'attributo **NONAME** su ciascuna funzione esportata.  Con questo attributo, nella tabella di esportazione della DLL vengono memorizzati gli ordinali anziché i nomi delle funzioni.  Questo metodo è vantaggioso se si esportano molte funzioni.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Utilizzo di un file def per esportare in base al valore ordinale](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Utilizzo di \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)