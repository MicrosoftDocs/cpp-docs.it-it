---
title: Creazione guidata componente ASP ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: vc.codewiz.class.atl.asp.overview
dev_langs: C++
helpviewer_keywords:
- ASP components, creating in ATL
- ATL Active Server Page Component Wizard
ms.assetid: 5a5cb904-dbbf-44ea-ad3d-2ddd14c1d3c5
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ad2d707b5dbfc78ec8975471114bc87bf23fe5f4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-active-server-page-component-wizard"></a>Creazione guidata componente ASP ATL
Questa procedura guidata consente di inserire nel progetto di componente pagine ASP (Active Server). Microsoft Internet Information Services (IIS) utilizza componenti ASP come parte della relativa architettura di sviluppo avanzato pagina Web.  
  
 Utilizzare questa procedura guidata, è possibile specificare che il componente del modello di threading e il supporto di aggregazione. È inoltre possibile indicare il supporto per l'interfaccia di informazioni di errore, punti di connessione e marshalling a thread libero.  
  
## <a name="remarks"></a>Note  
 A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY_CURRENT_USER** anziché **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata ATL.  
  
## <a name="names"></a>Nomi  
 Specificare i nomi per le classi da aggiungere al progetto, l'interfaccia e l'oggetto. Ad eccezione di **nome breve**, tutte le altre caselle possono essere modificati indipendentemente dalle altre. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutte le altre caselle in questa pagina.  
  
 Se si modifica il **coclasse** nome nella sezione COM, la modifica viene riflessa nel **tipo** e **ProgID** caselle, ma la **interfaccia** nome non modificare. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.  
  
### <a name="c"></a>C++  
 Vengono fornite informazioni per la classe C++ creata per l'oggetto.  
  
 **Nome breve**  
 Imposta il nome radice per l'oggetto. Il nome fornito determina la `Class` e **coclasse** nomi, il **file con estensione cpp** e **file con estensione h** nomi, il **interfaccia**nome, il **tipo** nomi e **ProgID**, a meno che non vengano modificati singolarmente tali campi.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito nel **nome breve**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe in un file esistente. Se si seleziona un file esistente, il non verrà salvato nel percorso selezionato finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se la dichiarazione di classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Classe**  
 Imposta il nome della classe da creare. Questo nome è in base al nome fornito nel **nome breve**, preceduto da "C", il prefisso standard per un nome di classe.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è in base al nome fornito nel **nome breve**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic **fine**, la procedura guidata viene richiesto di indicare se l'implementazione della classe deve essere aggiunti al contenuto del file. Fare clic su **Sì** da aggiungere al file; fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Con attributi**  
 Indica se l'oggetto utilizza gli attributi. Se si aggiunge un oggetto a un progetto ATL con attributo, questa opzione è selezionata e non può essere modificata. Ovvero, è possibile aggiungere solo oggetti con attributi a un progetto creato con il supporto di attributo.  
  
 Se si seleziona questa opzione per un progetto ATL che non ha attributo supporto, la procedura guidata viene richiesto di specificare se si desidera aggiungere il supporto di attributo per il progetto.  
  
 Per impostazione predefinita per i progetti senza attributi, gli oggetti aggiunti dopo aver impostato questa opzione vengono designati come attributi (la casella di controllo è selezionata). È possibile deselezionare questa casella per aggiungere un oggetto che non utilizza gli attributi.  
  
 Vedere [le impostazioni dell'applicazione, creazione guidata progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) e [meccanismi fondamentali degli attributi](../../windows/basic-mechanics-of-attributes.md) per ulteriori informazioni.  
  
### <a name="com"></a>COM  
 Fornisce informazioni sulle funzionalità COM per l'oggetto.  
  
 **Coclasse**  
 Imposta il nome della classe del componente che contiene un elenco delle interfacce supportate dall'oggetto. Se il progetto o l'oggetto utilizza gli attributi, è possibile modificare questa opzione poiché ATL non include il **coclasse** attributo.  
  
 **Type**  
 Imposta la descrizione dell'oggetto che verrà visualizzato nel Registro di sistema per la coclasse.  
  
 **Interface**  
 Imposta l'interfaccia creata per l'oggetto. Questa interfaccia contiene i metodi personalizzati.  
  
 **ProgID**  
 Imposta il nome che è possono utilizzare contenitori anziché il CLSID dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)

