---
title: "Creazione guidata classe C++ generica | Microsoft Docs"
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
  - "vc.codewiz.class.generic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata classe C++ generica [C++]"
ms.assetid: aa95be9e-fc1b-45db-a11d-0d32c4929077
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione guidata classe C++ generica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge una classe C\+\+ generica al progetto.  La classe non eredita da ATL o MFC.  
  
 **Nome di classe**  
 Consente di impostare il nome della nuova classe.  
  
 **File H**  
 Consente di impostare il nome del file di intestazione per la nuova classe.  Per impostazione predefinita, questo nome si basa su quello fornito in **Nome classe**.  Per salvare il file di intestazione nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente, fare clic sul pulsante con i puntini di sospensione \(**...**\).  Se si specifica un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di specificare se aggiungere la dichiarazione di classe al contenuto del file.  Per accodare la dichiarazione, scegliere **Sì**; scegliere **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **File CPP**  
 Consente di impostare il nome del file di implementazione per la nuova classe.  Per impostazione predefinita, questo nome si basa su quello fornito in **Nome classe**.  Per salvare il file di implementazione nella posizione desiderata o per aggiungere la definizione di classe a un file esistente, fare clic sul pulsante con i puntini di sospensione \(**...**\).  Se si specifica un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di specificare se aggiungere la definizione di classe al contenuto del file.  Per accodare la definizione, scegliere **Sì**; scegliere **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **Classe base**  
 Consente di impostare la classe base per la nuova classe.  
  
 **Accesso**  
 Consente di impostare l'accesso ai membri della classe base per la nuova classe.  I modificatori di accesso sono parole chiave che specificano il livello di accesso di altre classi alle funzioni membro della classe.  Per ulteriori informazioni su come specificare l'accesso, vedere [Controllo di accesso dei membri](../cpp/member-access-control-cpp.md).  Per impostazione predefinita, il livello di accesso alla classe è impostato su `public`.  
  
-   `public`  
  
-   `protected`  
  
-   `private`  
  
-   **Predefinito** \(Non viene generato nessun modificatore di accesso.\)  
  
 **Distruttore virtuale**  
 Consente di indicare se il distruttore della classe è virtuale.  Utilizzare un distruttore virtuale per assicurare la chiamata del distruttore corretto quando si eliminano le istanze delle classi derivate.  
  
 **Inline**  
 Consente di generare sia il costruttore di classi sia la definizione di classi come funzioni inline nel file di intestazione.  
  
 **Gestito**  
 Quando selezionata, aggiunge una classe gestita e un file di intestazione.  Quando viene cancellato, aggiunge una classe e un file di intestazione nativi.  
  
## Vedere anche  
 [Aggiunta di una classe C\+\+ generica](../ide/adding-a-generic-cpp-class.md)