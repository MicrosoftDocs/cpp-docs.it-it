---
title: "Membri contenitore di esempio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi contenitore"
ms.assetid: dc5a1998-a31b-4adf-b888-8abe5b87a4e0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Membri contenitore di esempio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo argomento è nella documentazione di Visual C\+\+ come esempio non funzionale di contenitori utilizzati nella libreria C\+\+ standard.  Per ulteriori informazioni, vedere [I contenitori STL](../standard-library/stl-containers.md).  
  
## Riferimenti  
  
## Definizioni typedef  
  
|||  
|-|-|  
|[const\_iterator](../standard-library/container-class-const-iterator.md)|Viene descritto un oggetto che può fungere da iteratore costante per la sequenza selezionata.|  
|[const\_reference](../standard-library/container-class-const-reference.md)|Viene descritto un oggetto che può essere utilizzata come riferimento costante a un elemento della sequenza selezionata.|  
|[const\_reverse\_iterator](../standard-library/container-class-const-reverse-iterator.md)|Viene descritto un oggetto che può fungere da iteratore inverso costante per la sequenza selezionata.|  
|[difference\_type](../standard-library/container-class-difference-type.md)|Viene descritto un oggetto che può rappresentare la differenza tra gli indirizzi di tutti i due elementi della sequenza selezionata.|  
|[iteratore](../standard-library/container-class-iterator.md)|Viene descritto un oggetto che può fungere da iteratore per la sequenza selezionata.|  
|[riferimenti](../standard-library/container-class-reference.md)|Viene descritto un oggetto che può essere utilizzata come riferimento a un elemento della sequenza selezionata.|  
|[reverse\_iterator](../standard-library/container-class-reverse-iterator.md)|Viene descritto un oggetto che può fungere da iteratore inverso per la sequenza selezionata.|  
|[size\_type](../standard-library/container-class-size-type.md)|Viene descritto un oggetto che può rappresentare la lunghezza di una sequenza selezionata.|  
|[Tipo di valore](../standard-library/container-class-value-type.md)|Agisce sinonimo del parametro di template **Ty**.|  
  
## Funzioni del membro  
  
|||  
|-|-|  
|[begin](../standard-library/container-class-begin.md)|Restituisce un iteratore che punta al primo elemento della sequenza \(o semplicemente oltre la fine di una sequenza vuota.|  
|[clear](../standard-library/container-class-clear.md)|Chiama [cancellare definitivamente sia](../standard-library/container-class-erase.md)\( [inizio](../standard-library/container-class-begin.md), [fine](../standard-library/container-class-end.md)\).|  
|[empty](../standard-library/container-class-empty.md)|Restituisce **true** per una sequenza controllata vuota.|  
|[end](../standard-library/container-class-end.md)|Restituisce un iteratore che punta a oltre la fine della sequenza.|  
|[Cancellare](../standard-library/container-class-erase.md)|Cancella un elemento.|  
|[max\_size](../standard-library/container-class-max-size.md)|Restituisce la lunghezza della sequenza più lunga che l'oggetto possa verificare, nel tempo costante indipendentemente dalla lunghezza della sequenza selezionata.|  
|[rbegin](../standard-library/container-class-rbegin.md)|Restituisce un iteratore inverso che punta a oltre la fine della sequenza selezionata, che definisce l'inizio della sequenza inversa.|  
|[rend](../standard-library/container-class-rend.md)|La funzione membro restituirà un iteratore inverso che punta al primo elemento della sequenza \(o semplicemente oltre la fine di una sequenza vuota\), definendo la fine della sequenza inversa.|  
|[size](../standard-library/container-class-size.md)|Restituisce la lunghezza della sequenza selezionata, nel tempo costante indipendentemente dalla lunghezza della sequenza selezionata.|  
|[scambio](../standard-library/container-class-swap.md)|Scambia le sequenze controllate tra **\*this** e `_Right`.|