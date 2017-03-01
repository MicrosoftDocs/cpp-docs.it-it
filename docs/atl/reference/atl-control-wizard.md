---
title: Creazione guidata controllo ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.control.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding controls
- controls [ATL], adding to projects
- ATL Control Wizard
ms.assetid: 991f8e72-ffbc-4382-a4ce-e255acfba5b6
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: 586ac14878ccd6908d025d706b72f3c9856d1b39
ms.lasthandoff: 02/24/2017

---
# <a name="atl-control-wizard"></a>Creazione guidata controllo ATL
Gli inserimenti in un progetto ATL (o un progetto MFC con supporto ATL) in un controllo ATL. È possibile utilizzare questa procedura guidata per inserire uno dei tre tipi di controlli:  
  
-   Controllo standard  
  
-   Controllo composito  
  
-   Controllo DHTML  
  
 Inoltre, è possibile specificare un controllo minimo, rimuove le interfacce dal [interfacce](../../atl/reference/interfaces-atl-control-wizard.md) elenco, vengono forniti come valori predefiniti per i controlli da aprire nella maggior parte dei contenitori. È possibile impostare le interfacce da supportare per il controllo nel **interfacce** pagina della procedura guidata.  
  
## <a name="remarks"></a>Note  
 Lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in HKEY_CURRENT_USER anziché HKEY_LOCAL_MACHINE. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della creazione guidata.  
  
## <a name="names"></a>Nomi  
 Specificare i nomi per le classi da aggiungere al progetto, l'interfaccia e l'oggetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nella **tipo** casella, mentre la **interfaccia** nome e **ProgID** non cambiano. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi della durante lo sviluppo del controllo.  
  
> [!NOTE]
>  **Coclasse** è modificabile solo nei controlli. Se il progetto con attributi, è possibile modificare **coclasse**.  
  
### <a name="c"></a>C++  
 Vengono fornite informazioni per la classe C++ creata per implementare l'oggetto.  
  
 **Nome breve**  
 Imposta il nome abbreviato per l'oggetto. Il nome fornito determina la classe e **Coclass** i nomi di file (. CPP e. H) nomi, il nome dell'interfaccia e **tipo** nomi, a meno che non vengano modificati singolarmente questi campi.  
  
 **Classe**  
 Imposta il nome della classe che implementa l'oggetto. Questo nome è basato sul nome fornito in **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe a un file esistente. Se si seleziona un file esistente, il non verrà salvato nella posizione selezionata finché non si sceglie **fine**.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se la dichiarazione di classe al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se è necessario aggiungere l'implementazione della classe in base al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Con attributi**  
 Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata. Vale a dire, è possibile aggiungere solo oggetti con attributi a un progetto creato con il supporto di attributo.  
  
 È possibile aggiungere un oggetto con attributi solo per un progetto ATL che utilizza gli attributi. Se si seleziona questa opzione per un progetto ATL che non dispone di supporto attributo, verrà chiesto di specificare se si desidera aggiungere il supporto di attributo per il progetto.  
  
 Per impostazione predefinita, tutti gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.  
  
 Vedere [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md) per ulteriori informazioni.  
  
### <a name="com"></a>COM  
 Fornisce informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Imposta il nome della classe del componente che contiene un elenco di interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se si crea il progetto utilizzando gli attributi, o se questa pagina della procedura guidata si indica che il controllo utilizza gli attributi, è possibile modificare questa opzione poiché ATL non include il **coclasse** attributo.  
  
 **Interfaccia**  
 Imposta il nome dell'interfaccia per l'oggetto. Per impostazione predefinita, un nome dell'interfaccia è preceduto da "I".  
  
 **Type**  
 Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema  
  
 **ProgID**  
 Imposta il nome che è possono utilizzare contenitori anziché il CLSID dell'oggetto. Questo campo non viene popolato automaticamente. Se non si popola manualmente questo campo, il controllo non siano disponibile ad altri strumenti. Ad esempio, i controlli ActiveX generati senza un `ProgID` non sono disponibili nel **Inserisci controllo ActiveX** la finestra di dialogo. Per ulteriori informazioni sulla finestra di dialogo, vedere [dialogo Inserisci controllo ActiveX](../../windows/insert-activex-control-dialog-box.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo ATL](../../atl/reference/adding-an-atl-control.md)   
 [Aggiunta di funzionalità per il controllo composito](../../atl/adding-functionality-to-the-composite-control.md)   
 [Nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)


