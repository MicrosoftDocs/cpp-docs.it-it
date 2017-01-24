---
title: "Specifica il percorso di progetto e i file di origine, Creazione guidata nuovo progetto da file di codice esistenti | Microsoft Docs"
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
  - "vc.appwiz.importwiz.location"
dev_langs: 
  - "C++"
ms.assetid: 29ddffb9-5918-4d72-8c7a-a365f9de96dd
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Specifica il percorso di progetto e i file di origine, Creazione guidata nuovo progetto da file di codice esistenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa pagina della Creazione guidata nuovo progetto da file di codice esistenti per specificare:  
  
-   Il percorso completo del nuovo progetto  
  
-   Le cartelle nelle quali cercare i file di origine esistenti  
  
-   I tipi di file che la creazione guidata importerà nel nuovo progetto.  
  
## Elenco attività  
 [Procedura: creare un progetto C\+\+ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## Elenco UIElement  
 **Percorso del file di progetto**  
 Specifica il percorso completo del nuovo progetto  La creazione guidata posizionerà tutti i file e le sottocartelle del nuovo progetto in questo percorso.  
  
 **Sfoglia**  
 Visualizza la finestra di dialogo **Percorso del file di progetto**, che consente di specificare la cartella che conterrà il nuovo progetto.  Il controllo consente di visualizzare la cartella desiderata.  
  
 **Nome progetto**  
 Consente di specificare il nome del nuovo progetto.  I file di progetto, che hanno estensioni quali vcxproj, adotteranno questo nome.  I file di codice esistenti manterranno il nome originale.  
  
 **Aggiungi al progetto file dalle cartelle**  
 Quando l'opzione è selezionata, la creazione guidata copia i file di codice esistenti dalla directory di origine, specificata nella casella di riepilogo sotto il controllo, nel nuovo progetto.  
  
 **Aggiungi sottocartelle**  
 Indica di copiare nel nuovo progetto i file di codice contenuti nella cartella visualizzata nella colonna **Cartella**, comprese le sottocartelle.  
  
 **Cartella**  
 Indica il percorso della cartella che contiene file di codice esistenti da copiare nel nuovo progetto.  In questa colonna sono elencate tutte le cartelle nelle quali la creazione guidata effettuerà la ricerca dei file di codice esistenti.  
  
 **Aggiungi**  
 Visualizza la finestra di dialogo **Aggiungi al progetto file dalla cartella**, che consente di specificare le cartelle nelle quali la creazione guidata effettuerà la ricerca dei file di codice.  
  
 **Rimuovi**  
 Elimina il percorso di cartella selezionato nella casella di riepilogo a sinistra del controllo.  
  
 **Tipi di file da aggiungere al progetto**  
 Specifica i tipi di file che la creazione guidata aggiungerà al nuovo progetto in funzione delle estensioni di file fornite.  Le estensioni di file sono precedute dal carattere jolly asterisco e sono delimitate da un punto e virgola nell'elenco delle estensioni di file.  
  
 **Mostra tutti i file in Esplora soluzioni**  
 Specifica che tutti i file del nuovo progetto saranno visualizzati nella finestra Esplora soluzioni.  Per impostazione predefinita l'opzione è selezionata.