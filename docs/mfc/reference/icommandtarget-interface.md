---
title: Interfaccia ICommandTarget | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ICommandTarget
dev_langs:
- C++
helpviewer_keywords:
- ICommandTarget interface
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
caps.latest.revision: 27
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 825fde18c56afb91bdb469212817109dc35abf68
ms.lasthandoff: 02/24/2017

---
# <a name="icommandtarget-interface"></a>Interfaccia ICommandTarget
Fornisce un controllo utente con un'interfaccia di ricevere i comandi da un oggetto di origine del comando.  
  
## <a name="syntax"></a>Sintassi  
  
```  
interface class ICommandTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ICommandTarget:: Initialize](#initialize)|Inizializza l'oggetto di destinazione di comando.|  
  
## <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando `ICommandTarget`, assegnare il controllo utente un riferimento a di [ICommandSource](../../mfc/reference/icommandsource-interface.md) oggetto.  
  
 Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `ICommandTarget`.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
  
##  <a name="a-nameinitializea-icommandtargetinitialize"></a><a name="initialize"></a>ICommandTarget:: Initialize  
 Inizializza l'oggetto di destinazione di comando.  
  
```  
void Initialize(ICommandSource^ cmdSource);  
```  
  
### <a name="parameters"></a>Parametri  
 `cmdSource`  
 Un handle all'oggetto di origine del comando.  
  
### <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, CWinFormsView invia comandi e messaggi dell'interfaccia utente del comando di aggiornamento per il controllo utente per consentire la gestione dei comandi MFC.  
  
 Questo metodo inizializza l'oggetto di destinazione di comando e associa il cmdSource oggetto di origine comando specificato. Deve essere chiamata nell'implementazione della classe del controllo utente. In fase di inizializzazione, è necessario registrare i gestori di comando con l'oggetto di origine del comando da ICommandSource::AddCommandHandler chiamante nell'implementazione di inizializzazione. Vedere Procedura: aggiungere comandi (Routing) per il controllo Windows Form per un esempio di come utilizzare Initialize per eseguire questa operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: aggiungere comandi controllo distribuzione di Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [Interfaccia ICommandSource](../../mfc/reference/icommandsource-interface.md)




