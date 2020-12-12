---
description: 'Ulteriori informazioni su: supporto documenti compositi, creazione guidata applicazione MFC'
title: Supporto documenti compositi, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.compdoc
ms.assetid: 42e1af83-12c4-438d-92eb-13835afdb148
ms.openlocfilehash: 5ccd95812c7b8a4379528b4c784a3d7ca09f538f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331358"
---
# <a name="compound-document-support-mfc-application-wizard"></a>Supporto documenti compositi, Creazione guidata applicazione MFC

In questa pagina della creazione guidata applicazione MFC indicare a quale livello l'applicazione fornisce supporto per documenti composti e attivi. L'applicazione deve supportare l'architettura documento/visualizzazione per supportare documenti composti e modelli di documento.

Per impostazione predefinita, l'applicazione non contiene supporto per documenti compositi. Se si accetta questa impostazione predefinita, l'applicazione non può supportare documenti attivi o file composti.

- **Supporto per documenti compositi**

  Determina se l'applicazione fornisce supporto per i contenitori, supporto server o entrambi. Per ulteriori informazioni su quest'area, vedere:

  - [Contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md)

  - [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md)

  |Opzione|Descrizione|
  |------------|-----------------|
  |**Nessuno**|Indica nessun supporto per l'incorporamento e il collegamento a oggetti (OLE). Per impostazione predefinita, la creazione guidata applicazione crea un'applicazione senza supporto ActiveX.|
  |**Contenitore**|Contiene oggetti collegati e incorporati.|
  |**Server mini**|Indica che l'applicazione può creare e gestire oggetti documento composito. Si noti che i mini server non possono essere eseguiti autonomamente e supportano solo elementi incorporati.|
  |**Server completo**|Indica che l'applicazione può creare e gestire oggetti documento composito. I server completi possono eseguire autonomamente e supportare elementi collegati e incorporati.|
  |**Contenitore/server completo**|Indica che l'applicazione può essere sia un contenitore che un server. Un contenitore è un'applicazione in grado di incorporare elementi incorporati o collegati nei propri documenti. Un server è un'applicazione in grado di creare elementi di automazione per l'uso da applicazioni contenitore.|

- **Opzioni aggiuntive**

  Indica se l'applicazione supporta i documenti attivi. Per ulteriori informazioni su questa funzionalità, vedere [documenti attivi](../../mfc/active-documents.md) .

  |Opzione|Description|
  |------------|-----------------|
  |**Server documenti attivi**|Indica che l'applicazione può creare e gestire documenti attivi. Se si seleziona questa opzione, è necessario specificare un'estensione di file per il server dei documenti attivi nella casella **estensione file** della pagina [stringhe modello di documento](../../mfc/reference/document-template-strings-mfc-application-wizard.md) della procedura guidata. Per ulteriori informazioni, vedere [Server dei documenti attivi](../../mfc/active-document-servers.md) .|
  |**Contenitore documenti attivi**|Indica che l'applicazione può contenere documenti attivi all'interno del frame. I documenti attivi possono includere, ad esempio, documenti di Internet Explorer o documenti di Office, ad esempio file di Microsoft Word o fogli di calcolo di Excel. Per ulteriori informazioni, vedere [contenimento dei documenti attivi](../../mfc/active-document-containment.md) .|
  |**Supporto per file composti**|Non serializza i documenti dell'applicazione contenitore utilizzando il formato di file composto. Questa opzione impone il caricamento di un intero file contenente gli oggetti in memoria. I salvataggi incrementali nei singoli oggetti non sono disponibili. Se un oggetto viene modificato e successivamente salvato, tutti gli oggetti nel file vengono salvati.|

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
