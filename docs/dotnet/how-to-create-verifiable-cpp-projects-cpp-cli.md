---
title: "Procedura: creare progetti C++ verificabili (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conversioni, progetti C++"
  - "assembly verificabili [C++], creazione"
  - "progetti Visual C++"
ms.assetid: 4ef2cc1a-e3e5-4d67-8d8d-9c614f8ec5d3
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: creare progetti C++ verificabili (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le procedure guidate per la creazione di applicazioni Visual C\+\+ non consentono di creare progetti verificabili, tuttavia è possibile convertire i progetti per renderli verificabili.  In questo argomento viene descritto come impostare le proprietà del progetto e modificare i file di origine per trasformare i progetti di Visual C\+\+ per creare applicazioni verificabili.  
  
## Impostazioni del compilatore e del linker  
 Per impostazione predefinita, per i progetti .NET viene utilizzato il flag \/clr del compilatore e viene configurato il linker per l'hardware x86.  Per ottenere codice verificabile, è necessario utilizzare il flag \/clr:safe e impostare il linker affinché generi MSIL anziché istruzioni macchina native.  
  
#### Per modificare le impostazioni del compilatore e del linker  
  
1.  Visualizzare la pagina delle proprietà del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  
  
2.  Sotto il nodo **Proprietà di configurazione** della pagina **Generale** impostare la proprietà **Supporto di Common Language Runtime** su **Supporto Common Language Runtime safe MSIL \(\/clr:safe\)**.  
  
3.  Sotto il nodo **Linker** della pagina **Avanzate** impostare la proprietà **Tipo immagine CLR** su **Imponi immagine IL safe \(\/CLRIMAGETYPE:SAFE\)**.  
  
## Rimozione dei tipi di dati nativi  
 Poiché i tipi di dati nativi non sono verificabili, è necessario rimuovere tutti i file di intestazione contenenti tipi nativi anche se questi non vengono effettivamente utilizzati.  
  
> [!NOTE]
>  La procedura riportata di seguito è valida per i progetti Applicazione Windows Form \(.NET\) e Applicazione console \(.NET\).  
  
#### Per rimuovere riferimenti a tipi di dati nativi  
  
1.  Impostare come commento l'intero contenuto del file Stdafx.h.  
  
## Configurazione di un punto di ingresso  
 Poiché le applicazioni verificabili non possono utilizzare le librerie di runtime C \(CRT\), non possono dipendere da librerie CRT per chiamare la funzione principale come punto di ingresso standard.  È quindi necessario indicare in modo esplicito il nome della funzione da chiamare inizialmente al linker. In questo caso, viene utilizzato Main\(\) invece di main\(\) o \_tmain\(\) per indicare un punto di ingresso non CRT, ma questo nome è arbitrario poichè il punto di ingresso deve essere specificato in modo esplicito.  
  
> [!NOTE]
>  Le procedure riportate di seguito sono applicabili ai progetti Applicazione console \(.NET\).  
  
#### Per configurare un punto di ingresso  
  
1.  Sostituire \_tmain\(\) con Main\(\) nel file con estensione cpp principale del progetto.  
  
2.  Visualizzare la pagina delle proprietà del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  
  
3.  Sotto il nodo **Linker** della pagina **Avanzate** immettere `Main` come valore della proprietà **Punto di ingresso**.  
  
## Vedere anche  
 [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md)