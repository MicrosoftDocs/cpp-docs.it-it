---
title: Aggiunta guidata variabile membro | Documenti Microsoft
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
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="add-member-variable-wizard"></a>Aggiunta guidata variabile membro
Questa procedura guidata consente di aggiungere una dichiarazione di variabile membro per il file di intestazione e, a seconda delle opzioni, è possibile aggiungere codice al file con estensione cpp. Dopo aver aggiunto la variabile membro utilizzando la procedura guidata, è possibile modificare il codice nell'ambiente di sviluppo.  
  
 **Accesso**  
 Imposta l'accesso alla variabile membro. Modificatori di accesso sono parole chiave che specificano l'accesso alla variabile membro altre classi. Vedere [controllo di accesso ai membri](../cpp/member-access-control-cpp.md) per ulteriori informazioni sull'impostazione di accesso. Il livello di accesso a variabili membro è impostato su **pubblica** per impostazione predefinita.  
  
-   [public](../cpp/public-cpp.md)  
  
-   [protected](../cpp/protected-cpp.md)  
  
-   [private](../cpp/private-cpp.md)  
  
 **Tipo di variabile**  
 Imposta il tipo restituito per la variabile membro che si sta aggiungendo.  
  
-   Se si aggiunge una variabile membro che non è un controllo di finestra di dialogo, selezionare dall'elenco dei tipi disponibili.  
  
     Per informazioni sui tipi, vedere [tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
    |||  
    |-|-|  
    |`char`|**short**|  
    |**double**|`unsigned char`|  
    |**float**|`unsigned int`|  
    |`int`|`unsigned long`|  
    |**long**||  
  
-   Se si aggiunge una variabile membro per un controllo di finestra di dialogo, questa casella viene compilata con il tipo di oggetto restituito per un controllo o un valore. Se si seleziona **controllo**, quindi **tipo di variabile** specifica la classe di base del controllo in cui si seleziona il **ID controllo** casella. Se il controllo di finestra di dialogo può contenere un valore e se si seleziona **valore**, quindi **tipo di variabile** specifica il tipo appropriato per il valore di controllo può contenere. Vedere [controlli finestra di dialogo e i tipi di variabile](../ide/dialog-box-controls-and-variable-types.md) per ulteriori informazioni.  
  
     Questo valore varia a seconda della selezione eseguita nel **ID controllo** e non può essere modificato.  
  
 **Nome della variabile**  
 Imposta il nome della variabile membro che si sta aggiungendo. Le variabili membro iniziano con la stringa di identificazione "m _," a cui viene fornito automaticamente per impostazione predefinita.  
  
 **Variabile di controllo**  
 Indica che la variabile membro gestisce un controllo all'interno di una finestra di dialogo [scambio di dati e la convalida dei dati](../mfc/dialog-data-exchange-and-validation.md) supportano. Vedere [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) per ulteriori informazioni. Questa opzione è disponibile solo per le variabili membro aggiunte alle classi derivate da [CDialog](../mfc/reference/cdialog-class.md). Selezionare questa casella per attivare il **ID controllo** e **tipo di controllo** opzioni.  
  
 **ID di controllo**  
 Imposta l'ID per la variabile di controllo che si sta aggiungendo. Selezionare dall'elenco di ID per il tipo di controllo che si desidera aggiungere la variabile membro. L'elenco è attivo solo quando il **la variabile di controllo** casella è selezionata, ed è limitato agli ID per i controlli già aggiunti alla finestra di dialogo. Ad esempio, per lo standard **OK** pulsante, l'ID di controllo è **IDOK**.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Controllo**|Questa opzione è impostata per impostazione predefinita per il tipo di controllo. Gestisce il controllo stesso e non lo stato o contenuto (come si desideri farlo con una casella di riepilogo, una casella combinata o casella di modifica) del controllo.|  
|**Valore**|Questa opzione è disponibile solo per i tipi di controllo che possono contenere un valore (ad esempio una casella di modifica) o riflettere uno stato (ad esempio una casella di controllo) e per cui si può gestire l'intervallo, nel contenuto o stato. Vedere [controlli finestra di dialogo e i tipi di variabile](../ide/dialog-box-controls-and-variable-types.md) per ulteriori informazioni.|  
  
 **Categoria**  
 Specifica se la variabile è basata su un tipo di controllo o il valore del controllo.  
  
 **Tipo di controllo**  
 Imposta il tipo di controllo da aggiungere. Questa casella non è possibile modificare. Ad esempio, un pulsante ha il tipo di controllo **pulsante**, e una casella combinata è il tipo di controllo **COMBOBOX**. Vedere [controlli finestra di dialogo e i tipi di variabile](../ide/dialog-box-controls-and-variable-types.md) per ulteriori informazioni.  
  
 **Numero massimo caratteri**  
 Disponibile solo quando **tipo di variabile** è impostato su [CString](../atl-mfc-shared/reference/cstringt-class.md). Indica il numero massimo di caratteri che può contenere il controllo.  
  
 **Valore minimo**  
 Disponibile solo quando il tipo di variabile è **BOOL**, `int`, **UINT**, **lungo**, `DWORD`, **float**, **doppie**, **BYTE**, **breve**, [COLECurrency](../mfc/reference/colecurrency-class.md) o [CTime](../atl-mfc-shared/reference/ctime-class.md). Indica il valore minimo accettabile per un intervallo di scala o Data.  
  
 **Valore massimo**  
 Disponibile solo quando il tipo di variabile è **BOOL**, `int`, **UINT**, **lungo**, `DWORD`, **float**, **doppie**, **BYTE**, **breve**, `COLECurrency` o `CTime`. Indica il valore massimo accettabile per un intervallo di scala o Data.  
  
 **file con estensione h**  
 Per i controlli ActiveX, il cui variabili membro richiedono una classe wrapper. Imposta il nome del file di intestazione per aggiungere la dichiarazione di classe.  
  
 **file con estensione cpp**  
 Per i controlli ActiveX, il cui variabili membro richiedono una classe wrapper. Imposta il nome del file di implementazione per aggiungere la definizione di classe.  
  
 **Commentoo**  
 Fornisce un commento nel file di intestazione per la variabile membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)