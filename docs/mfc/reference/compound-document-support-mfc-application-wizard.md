---
title: Supporto documenti compositi, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.compdoc
ms.assetid: 42e1af83-12c4-438d-92eb-13835afdb148
ms.openlocfilehash: b2ff4f312132b690223f124fd8790d0e2c172b7f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62373440"
---
# <a name="compound-document-support-mfc-application-wizard"></a>Supporto documenti compositi, Creazione guidata applicazione MFC

In questa pagina della creazione guidata applicazione MFC, indicare a quale livello dell'applicazione fornisce il supporto documenti compositi e attivi. L'applicazione deve supportare l'architettura documento/visualizzazione per il supporto documenti compositi e modelli di documento.

Per impostazione predefinita, l'applicazione non contiene nessun supporto documenti compositi. Se si accetta l'impostazione predefinita, l'applicazione non supporta i documenti attivi o file compositi.

- **Supporto documenti compositi**

  Determina se l'applicazione fornisce il supporto dei contenitori, il supporto del server o entrambi. Per ulteriori informazioni su quest'area, vedere:

  - [Contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md)

  - [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md)

  |Opzione|Descrizione|
  |------------|-----------------|
  |**None**|Non indica nessun supporto per Object Linking and Embedding (OLE). Per impostazione predefinita, la creazione guidata applicazione crea un'applicazione senza il supporto di ActiveX.|
  |**Container**|Contiene gli oggetti collegati e incorporati.|
  |**Server ridotto**|Indica l'applicazione può creare e gestire gli oggetti documento compositi. Si noti che non è possibile eseguire i server ridotti autonomi e supportano solo gli elementi incorporati.|
  |**Server completo**|Indica l'applicazione può creare e gestire gli oggetti documento compositi. Server completo sono in grado di eseguire applicazioni autonome e supportano entrambi collegati e incorporati gli elementi.|
  |**Contenitore/server completo**|Indica che l'applicazione può essere sia un contenitore e un server. Un contenitore è un'applicazione che è possibile incorporare elementi incorporati o collegati in dei propri documenti. Un server è un'applicazione che è possibile creare elementi di automazione per l'utilizzo da applicazioni contenitore.|

- **Opzioni aggiuntive**

  Indica se l'applicazione supporta i documenti attivi. Visualizzare [documenti attivi](../../mfc/active-documents.md) per altre informazioni su questa funzionalità.

  |Opzione|Descrizione|
  |------------|-----------------|
  |**Server documenti attivi**|Indica l'applicazione può creare e gestire i documenti attivi. Se si seleziona questa opzione, è necessario specificare un'estensione di file per il server documenti attivi nella **estensione di File** nella casella il [stringhe modello documento](../../mfc/reference/document-template-strings-mfc-application-wizard.md) pagina della procedura guidata. Visualizzare [server documenti attivi](../../mfc/active-document-servers.md) per altre informazioni.|
  |**Contenitore documenti attivi**|Indica che l'applicazione può contenere documenti attivi all'interno della cornice. Documenti attivi possono includere, ad esempio, Internet Explorer o documenti di Office, ad esempio i file di Microsoft Word o fogli di calcolo Excel. Visualizzare [Active Document Containment](../../mfc/active-document-containment.md) per altre informazioni.|
  |**Supporto per file compositi**|Non serializza i documenti dell'applicazione contenitore usando il formato di file composito. Questa opzione forza il caricamento di un intero file che contiene gli oggetti in memoria. Salvataggi incrementali per i singoli oggetti non sono disponibili. Se un oggetto è stato modificato e salvato successivamente, vengono salvati tutti gli oggetti nel file.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
