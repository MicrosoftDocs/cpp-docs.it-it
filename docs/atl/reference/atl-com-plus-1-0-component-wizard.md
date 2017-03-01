---
title: Creazione guidata 1.0 componente ATL COM + | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.mts.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding components
- ATL COM+ 1.0 Component Wizard
ms.assetid: 11670681-8671-4122-96a4-2e52f8dadce0
caps.latest.revision: 13
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
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 2729975c5e823965f4f5c16d5bfe317ce10a3670
ms.lasthandoff: 02/24/2017

---
# <a name="atl-com-10-component-wizard"></a>Creazione guidata componente ATL COM+ 1.0
Utilizzare questa procedura guidata per aggiungere un oggetto al progetto che supporta i servizi di COM+ 1.0, incluse le transazioni.  
  
 È possibile specificare se l'oggetto supporta le interfacce duali e automazione. È inoltre possibile indicare il supporto per l'interfaccia di informazioni sugli errori, controllo di oggetti avanzato, transazioni e accodamento asincrono.  
  
## <a name="remarks"></a>Note  
 A partire da [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], lo script di registrazione generato dalla procedura guidata registrerà i componenti COM in **HKEY_CURRENT_USER** anziché **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della creazione guidata.  
  
## <a name="names"></a>Nomi  
 Specificare i nomi per le classi da aggiungere al progetto, l'interfaccia e l'oggetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati indipendentemente dagli altri. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina. Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nella **tipo** e **ProgID** caselle, ma il **interfaccia** nome non cambia. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi della durante lo sviluppo del controllo.  
  
 **Nome breve**  
 Imposta il nome abbreviato per l'oggetto. Il nome fornito determina la `Class` e `Coclass` nomi, il **. cpp** e **file con estensione h** nomi, il **interfaccia** nome, il **tipo** nomi e **ProgID**, a meno che non vengano modificati singolarmente questi campi.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, il non verrà salvato nella posizione selezionata finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se la dichiarazione di classe al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Classe**  
 Imposta il nome della classe da creare. Questo nome è basato sul nome fornito in **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se è necessario aggiungere l'implementazione della classe in base al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Con attributi**  
 Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata. Vale a dire, è possibile aggiungere solo oggetti con attributi a un progetto creato con il supporto di attributo.  
  
 Se si seleziona questa opzione per un progetto ATL che non dispone di supporto attributo, verrà chiesto di specificare se si desidera aggiungere il supporto di attributo per il progetto.  
  
 Tutti gli oggetti che aggiunti dopo l'impostazione di questa opzione vengono designati come attributi per impostazione predefinita (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.  
  
 Vedere [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md) per ulteriori informazioni.  
  
### <a name="com"></a>COM  
 Fornisce informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Imposta il nome della classe del componente che contiene un elenco di interfacce supportate dall'oggetto.  
  
> [!NOTE]
>  Se si crea il progetto utilizzando gli attributi, o se questa pagina della procedura guidata si indica che il componente COM+ 1.0 utilizza gli attributi, è possibile modificare questa opzione poiché ATL non include il `coclass` attributo.  
  
 **Type**  
 Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema  
  
 **Interfaccia**  
 Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.  
  
 **ProgID**  
 Imposta il nome che è possono utilizzare contenitori anziché il CLSID dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)


