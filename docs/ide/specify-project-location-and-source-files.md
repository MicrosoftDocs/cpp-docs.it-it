---
title: Nuovo progetto da codice esistente - file di origine (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.appwiz.importwiz.location
dev_langs: C++
ms.assetid: 29ddffb9-5918-4d72-8c7a-a365f9de96dd
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 04f73f89745f797658029eac2331d1764af4c065
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specify-project-location-and-source-files-create-new-project-from-existing-code-files-wizard"></a>Specifica il percorso di progetto e i file di origine, Creazione guidata nuovo progetto da file di codice esistenti
Utilizzare questa pagina della procedura guidata Crea nuovo progetto da file di codice esistenti per specificare:  
  
-   Il percorso della directory del nuovo progetto  
  
-   La directory per cercare i file di origine esistenti  
  
-   I tipi di file, che la procedura guidata importerà nel nuovo progetto  
  
## <a name="task-list"></a>Elenco attività  
 [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Percorso file di progetto**  
 Specifica il percorso della directory del nuovo progetto. Questo percorso è in cui la creazione guidata posizionerà tutti i file (e le sottodirectory) del nuovo progetto.  
  
 **Sfoglia**  
 Consente di visualizzare il **percorso del file di progetto** finestra di dialogo che consente di specificare la cartella che conterrà il nuovo progetto. Questo controllo consente di passare alla cartella desiderata.  
  
 **Nome progetto**  
 Specifica il nome del nuovo progetto. File di progetto, che hanno estensioni di file, ad esempio con estensione vcxproj adotteranno questo nome. File di codice esistenti consente di mantenere il nome originale.  
  
 **Aggiungere file al progetto da queste cartelle**  
 Se selezionata, imposta la procedura guidata per copiare i file di codice esistenti dalla directory di origine (che sono specificate nella casella di riepilogo sotto il controllo) nel nuovo progetto.  
  
 **Per aggiungere sottocartelle**  
 Specifica per copiare i file di codice da tutte le sottodirectory della directory elencati **cartella** colonna nel nuovo progetto.  
  
 **Cartella**  
 Indica il percorso della directory che contiene i file di codice esistenti da copiare nel nuovo progetto. Questa colonna elenca tutte le directory che la procedura guidata eseguirà la ricerca dei file di codice esistenti.  
  
 **Aggiungi**  
 Consente di visualizzare il **aggiungere file al progetto da questa cartella** nella finestra di dialogo che consente la specifica directory che la procedura guidata eseguirà la ricerca dei file di codice esistenti.  
  
 **Rimuovi**  
 Elimina il percorso della directory selezionata in elenco casella a sinistra di questo controllo.  
  
 **Tipi di file da aggiungere al progetto**  
 Specifica i tipi di file che la procedura guidata aggiungerà al nuovo progetto basato sulle estensioni di file specificato. Estensioni di file sono precedute con il carattere jolly asterisco e sono delimitate nell'elenco di estensioni di file da un punto e virgola.  
  
 **Mostra tutti i file in Esplora soluzioni**  
 Specifica che tutti i file nel nuovo progetto per essere visibile e visualizzato nella finestra Esplora soluzioni. Questa opzione è attivata per impostazione predefinita.