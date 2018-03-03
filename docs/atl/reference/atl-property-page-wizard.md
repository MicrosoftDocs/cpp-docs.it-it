---
title: "Creazione guidata pagina delle proprietà ATL | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.ppg.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding property pages
- ATL Property Page Wizard
ms.assetid: 6113e325-facd-4f68-b491-144d75209922
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9f97b4fcc84f9099ca7017eabd7ae5ead62cfe63
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-property-page-wizard"></a>Creazione guidata pagina delle proprietà ATL
Questa procedura guidata [aggiunge una pagina delle proprietà in un progetto ATL](../../atl/reference/adding-an-atl-property-page.md) o a un progetto MFC con supporto ATL. Una pagina delle proprietà ATL fornisce un'interfaccia utente per l'impostazione delle proprietà (o chiamare i metodi) di uno o più oggetti COM.  
  
## <a name="remarks"></a>Note  
 A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY_CURRENT_USER** anziché **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata ATL.  
  
## <a name="names"></a>Nomi  
 Specificare i nomi per le classi da aggiungere al progetto, l'interfaccia e l'oggetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** e **ProgID** caselle. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa la pagina delle proprietà.  
  
> [!NOTE]
>  **Coclasse** è modificabile solo nei progetti. Se il progetto con attributi, è possibile modificare **coclasse**.  
  
### <a name="c"></a>C++  
 Vengono fornite informazioni per la classe C++ creata per implementare l'oggetto.  
  
|||  
|-|-|  
|Termine|Definizione|  
|**Nome breve**|Imposta il nome abbreviato per l'oggetto. Il nome fornito determina la classe e **coclasse** i nomi di file (**. cpp** e **h**) nomi, il **tipo** nome e il  **ProgID**, a meno che non vengano modificati singolarmente tali campi.|  
|**file con estensione h**|Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito nel **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente. Se si seleziona un file esistente, il non verrà salvato nel percorso selezionato finché non si sceglie **fine** nella procedura guidata.<br /><br /> La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.|  
|**Classe**|Imposta il nome della classe che implementa l'oggetto. Questo nome è in base al nome fornito nel **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.|  
|**file con estensione cpp**|Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.<br /><br /> La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se l'implementazione della classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.|  
|**Con attributi**|Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata, vale a dire, è possibile aggiungere attributi solo gli oggetti a un progetto creato con il supporto di attributo.<br /><br /> È possibile aggiungere un oggetto con attributi solo a un progetto ATL che utilizza gli attributi. Se si seleziona questa opzione per un progetto ATL che non ha attributo supporto, la procedura guidata viene richiesto di specificare se si desidera aggiungere il supporto di attributo per il progetto.<br /><br /> Per impostazione predefinita, tutti gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.<br /><br /> Vedere [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md) per ulteriori informazioni.|  
  
### <a name="com"></a>COM  
 Fornisce informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se si crea il progetto utilizzando gli attributi, o se in questa pagina della procedura guidata si indica che la pagina delle proprietà utilizza gli attributi, è possibile modificare questa opzione perché ATL non include il `coclass` attributo.  
  
 **Type**  
 Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema  
  
 **ProgID**  
 Imposta il nome che è possono utilizzare contenitori anziché il CLSID dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni, creazione guidata pagina delle proprietà ATL](../../atl/reference/options-atl-property-page-wizard.md)   
 [Stringhe, creazione guidata pagina delle proprietà ATL](../../atl/reference/strings-atl-property-page-wizard.md)   
 [Esempio: implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)

