---
title: "Errore di compilazione progetto PRJ0039 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PRJ0039"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0039"
ms.assetid: 207bbc28-922f-44d6-8bdd-3016c850f5b9
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Errore di compilazione progetto PRJ0039
Impossibile creare un file temporaneo. Questa operazione è necessaria per il corretto funzionamento dello strumento NMake.  
  
 Quando si crea un progetto makefile \(vedere [Creazione di un progetto makefile](../ide/creating-a-makefile-project.md)\), nel sistema di progetti Visual C\+\+ è richiesta la creazione di alcuni file temporanei. Questo errore indica che non è stato possibile creare uno o più di questi file.  
  
 La variabile di ambiente TMP contiene il nome della directory temp.  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore con le soluzioni consigliate:  
  
 L'utente non ha accesso in scrittura alla directory temp  
 Accertarsi di avere accesso in scrittura alla directory temp.  
  
 Sono presenti troppi file temp nella directory temp  
 Alcuni file temp potrebbero essere stati creati, ma non eliminati, da altri processi. Eliminare alcuni o tutti i file temp.  
  
 Lo spazio su disco è esaurito  
 Eliminare alcuni file sul disco o spostare la directory temp su un disco con spazio libero.  
  
 La variabile di ambiente TMP è errata  
 La variabile di ambiente TMP potrebbe puntare a una directory inesistente.