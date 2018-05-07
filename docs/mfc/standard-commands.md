---
title: Comandi standard | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- File menu
- identifiers [MFC], command IDs
- command IDs, standard commands
- OLE commands
- commands [MFC], standard
- standard command IDs
- Window menu commands
- standard commands
- View menu commands
- Edit menu standard commands
- Help [MFC], menus
- programmer-defined IDs [MFC]
ms.assetid: 88cf3ab4-79b3-4ac6-9365-8ac561036fbf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: abe1b1676c5d1944adf61f6ae4234a7e3478c3b9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="standard-commands"></a>Comandi standard
Il framework definisce molti messaggi di comando standard. Gli ID per questi comandi hanno in genere il formato:  
  
 **ID _** *origine*_*elemento*  
  
 dove *origine* è in genere un nome di menu e *elemento* è una voce di menu. Ad esempio, l'ID di comando per il nuovo comando dal menu File è `ID_FILE_NEW`. ID di comando standard vengono visualizzati in grassetto nella documentazione. ID definiti dall'utente vengono visualizzati in un tipo di carattere che è diverso dal testo adiacente.  
  
 Di seguito è riportato un elenco di alcune delle più importanti comandi supportati:  
  
 *Comandi del Menu file*  
 Nuovo, Apri, Close, Save, Salva con nome, Imposta pagina, il programma di installazione di stampa, stampa, anteprima di stampa, uscita e i file usati di recente.  
  
 *Modificare i comandi di Menu*  
 Cancella, Cancella tutti, copia, Taglia, ricerca, Incolla, ripetere, Replace, Seleziona tutto, Annulla e Ripeti.  
  
 *Comandi del menu Visualizza*  
 Barra degli strumenti e barra di stato.  
  
 *Comandi del menu Finestra*  
 Nuovo, Disponi, supportano la propagazione, Affianca orizzontalmente, Affianca verticalmente e divisione.  
  
 *Comandi del menu?*  
 Un indice, utilizzando la Guida e su.  
  
 *Comandi OLE (Menu di modifica)*  
 Inserisci nuovo oggetto, modificare i collegamenti, Incolla collegamento, Incolla speciale e *typename* oggetto (comandi verbo).  
  
 Il framework fornisce vari livelli di supporto per questi comandi. Alcuni comandi sono supportati solo come ID di comando definiti, mentre altri sono supportati con implementazioni complete. Ad esempio, il framework implementa il comando Apri dal menu File, creando un nuovo oggetto documento, la visualizzazione di una finestra di dialogo Apri e aprire e la lettura del file. Al contrario, è necessario implementare i comandi del menu Modifica manualmente, poiché i comandi come **ID_EDIT_COPY** dipendono dalla natura dei dati copiati.  
  
 Per ulteriori informazioni sui comandi supportati e il livello di implementazione fornita, vedere [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md). I comandi standard sono definiti nel file AFXRES. H.  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)

