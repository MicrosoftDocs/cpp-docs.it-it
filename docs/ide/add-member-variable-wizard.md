---
title: Aggiunta guidata variabile membro | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.variable.overview
dev_langs:
- C++
helpviewer_keywords:
- Add Member Variable Wizard [C++]
ms.assetid: 73e8fa99-ac1a-42e2-8fc2-4684b9eb6d4d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3ae6a3aef4bdf774b5630a9bb0b2a0b49f7f29b
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33336326"
---
# <a name="add-member-variable-wizard"></a>Aggiunta guidata variabile membro
Questa procedura guidata consente di aggiungere una dichiarazione di variabile membro al file di intestazione e, a seconda delle opzioni, di aggiungere codice al file con estensione cpp. Dopo aver aggiunto la variabile membro usando la procedura guidata, è possibile modificare il codice nell'ambiente di sviluppo.  
  
 **Accesso**  
 Imposta l'accesso alla variabile membro. I modificatori di accesso sono parole chiave che specificano l'accesso di altre classi alla variabile membro. Per altre informazioni sula specifica dell'accesso, vedere [Controllo degli accessi ai membri](../cpp/member-access-control-cpp.md). Il livello di accesso alla variabile membro è impostato su **public** per impostazione predefinita.  
  
-   [public](../cpp/public-cpp.md)  
  
-   [protected](../cpp/protected-cpp.md)  
  
-   [private](../cpp/private-cpp.md)  
  
 **Tipo variabile**  
 Imposta il tipo restituito per la variabile membro da aggiungere.  
  
-   Se si aggiunge una variabile membro che non è un controllo di finestra di dialogo, selezionare dall'elenco dei tipi disponibili.  
  
     Per altre informazioni sui tipi, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
    |||  
    |-|-|  
    |`char`|**short**|  
    |**double**|`unsigned char`|  
    |**float**|`unsigned int`|  
    |`int`|`unsigned long`|  
    |**long**||  
  
-   Se si aggiunge una variabile membro per un controllo di finestra di dialogo, questa casella viene compilata con il tipo di oggetto restituito per un controllo o un valore. Se si seleziona **Controllo**, **Tipo variabile** specifica la classe di base del controllo selezionato nella casella **ID controllo**. Se il controllo di finestra di dialogo può contenere un valore e se si seleziona **Valore**, **Tipo variabile** specifica il tipo appropriato per il valore che il controllo può contenere. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).  
  
     Questo valore varia a seconda del valore selezionato in **ID controllo** e non può essere modificato.  
  
 **Nome variabile**  
 Imposta il nome della variabile membro da aggiungere. Le variabili membro iniziano con la stringa di identificazione "m _" specificata automaticamente per impostazione predefinita.  
  
 **Variabile di controllo**  
 Indica che la variabile membro gestisce un controllo all'interno di una finestra di dialogo con il supporto per lo [scambio di dati e la convalida di dati](../mfc/dialog-data-exchange-and-validation.md). Per altre informazioni, vedere [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange). Questa opzione è disponibile solo per le variabili membro aggiunte alle classi derivate da [CDialog](../mfc/reference/cdialog-class.md). Selezionare questa casella per attivare le opzioni **ID controllo** e **Tipo controllo**.  
  
 **ID controllo**  
 Imposta l'ID per la variabile di controllo da aggiungere. Selezionare dall'elenco l'ID per il tipo di controllo per cui aggiungere la variabile membro. L'elenco è attivo solo quando la casella **Variabile di controllo** è selezionata ed è limitato agli ID per i controlli già aggiunti alla finestra di dialogo. Ad esempio, per il pulsante **OK** standard, l'ID controllo è **IDOK**.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Controllo**|Questa opzione è impostata per impostazione predefinita per il tipo di controllo. Gestisce il controllo e non lo stato o il contenuto del controllo (come è possibile che si voglia fare con una casella di riepilogo, una casella combinata o casella di modifica).|  
|**Valore**|Questa opzione è disponibile solo per i tipi di controllo che possono contenere un valore (ad esempio una casella di modifica) o riflettere uno stato (ad esempio una casella di controllo) e per cui è possibile gestire intervallo, contenuto o stato. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).|  
  
 **Categoria**  
 Specifica se la variabile è basata su un tipo di controllo o sul valore del controllo.  
  
 **Tipo controllo**  
 Imposta il tipo di controllo da aggiungere. Questa casella non può essere modificata. Ad esempio, il tipo di controllo di un pulsante è **BUTTON**, mentre il tipo di controllo di una casella combinata è **COMBOBOX**. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).  
  
 **N. max caratteri**  
 Disponibile solo quando **Tipo variabile** è impostato su [CString](../atl-mfc-shared/reference/cstringt-class.md). Indica il numero massimo di caratteri che è possibile inserire in un controllo.  
  
 **Valore minimo**  
 Disponibile solo quando il tipo di variabile è **BOOL**, `int`, **UINT**, **long**, `DWORD`, **float**, **double**, **BYTE**, **short**, [COLECurrency](../mfc/reference/colecurrency-class.md) o [CTime](../atl-mfc-shared/reference/ctime-class.md). Indica il valore minimo accettabile per una scala o un intervallo di date.  
  
 **Valore massimo**  
 Disponibile solo quando il tipo di variabile è **BOOL**, `int`, **UINT**, **long**, `DWORD`, **float**, **double**, **BYTE**, **short**, `COLECurrency` o `CTime`. Indica il valore massimo accettabile per una scala o un intervallo di date.  
  
 **File con estensione h**  
 Per i controlli ActiveX, le cui variabili membro richiedono una classe wrapper. Imposta il nome del file di intestazione per aggiungere la dichiarazione di classe.  
  
 **File con estensione cpp**  
 Per i controlli ActiveX, le cui variabili membro richiedono una classe wrapper. Imposta il nome del file di implementazione per aggiungere la definizione di classe.  
  
 **Commentoo**  
 Specifica un commento nel file di intestazione per la variabile membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)