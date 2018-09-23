---
title: Nuovo progetto da codice esistente - File di origine (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.appwiz.importwiz.location
dev_langs:
- C++
ms.assetid: 29ddffb9-5918-4d72-8c7a-a365f9de96dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3647ad3211043a5356649cb5f350ec07009f2279
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707837"
---
# <a name="specify-project-location-and-source-files-create-new-project-from-existing-code-files-wizard"></a>Specifica il percorso di progetto e i file di origine, Creazione guidata nuovo progetto da file di codice esistenti
Usare questa pagina della Creazione guidata nuovo progetto da file di codice esistenti per specificare:  
  
-   Il percorso della directory del nuovo progetto  
  
-   Le directory in cui cercare i file di origine esistenti  
  
-   I tipi di file che la procedura guidata importerà nel nuovo progetto  
  
## <a name="task-list"></a>Elenco attività  
[Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
- **Percorso del file di progetto**

   Specifica il percorso della directory del nuovo progetto. Questo è il percorso in cui la creazione guidata inserisce tutti i file (e le sottodirectory) del nuovo progetto.  
  
- **Sfoglia**

   Visualizza la finestra di dialogo **Percorso del file di progetto** che consente di specificare la directory che conterrà il nuovo progetto. Questo controllo consente di passare alla cartella desiderata.  
  
- **Nome progetto**

   Specifica il nome del nuovo progetto. I file di progetto, che hanno estensioni come vcxproj, adottano questo nome. I file di codice esistenti mantengono il nome originale.  
  
- **Aggiungi al progetto file dalle cartelle**

   Se selezionata, imposta la procedura guidata per la copia dei file di codice esistenti dalle directory di origine (specificate nella casella di riepilogo sotto il controllo) al nuovo progetto.  
  
- **Aggiungi sottocartelle**

   Specifica la copia dei file di codice da tutte le sottodirectory della directory elencata nella colonna **Cartella** al nuovo progetto.  
  
- **Cartella**

   Indica il percorso della directory che contiene i file di codice esistenti da copiare nel nuovo progetto. Questa colonna elenca tutte le directory in cui la procedura guidata ricerca i file di codice esistenti.  
  
- **Aggiungi**

   Visualizza la finestra di dialogo **Consente di aggiungere al progetto file presenti in questa cartella** nella quale è possibile specificare le directory in cui la procedura guidata eseguirà la ricerca dei file di codice esistenti.  
  
- **Rimuovi**

   Elimina il percorso della directory selezionato nella casella di riepilogo a sinistra del controllo.  
  
- **Tipi di file da aggiungere al progetto**

   Specifica i tipi di file che la procedura guidata aggiungerà al nuovo progetto in base alle estensioni di file specificate. Le estensioni di file sono precedute dal carattere jolly asterisco e sono delimitate da punti e virgola nell'elenco di estensioni.  
  
- **Mostra tutti i file in Esplora soluzioni**

   Specifica che tutti i file del nuovo progetto sono visibili e vengono visualizzati nella finestra Esplora soluzioni. Questa opzione è attivata per impostazione predefinita.