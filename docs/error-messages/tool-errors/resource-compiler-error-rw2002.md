---
title: Errore del compilatore di risorse RW2002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: RW2002
dev_langs: C++
helpviewer_keywords: RW2002
ms.assetid: b1d1a49b-b50b-4b0b-9f09-c7762e2dbe8f
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: db322791c3804f387c452b3839260826585a2e30
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-error-rw2002"></a>Errore del compilatore di risorse RW2002
Errore di analisi  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  **Tipo di acceleratore richiesto (ASCII o VIRTKEY)**  
  
     Il campo `type` nell'istruzione **ACCELERATORS** deve contenere il valore ASCII o VIRTKEY.  
  
2.  **Previsto BEGIN nella tabella di tasti di scelta rapida**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **ACCELERATORS** .  
  
3.  **BEGIN previsto nella finestra di dialogo**  
  
     Il **iniziare** parola deve seguire immediatamente la **finestra di dialogo** (parola chiave).  
  
4.  **BEGIN previsto nel menu**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **MENU** .  
  
5.  **BEGIN previsto in RCData**  
  
     La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **RCDATA** .  
  
6.  **Previsto BEGIN nella tabella di stringhe**  
  
     Il **iniziare** parola deve seguire immediatamente la **STRINGTABLE** (parola chiave).  
  
7.  **Non è possibile riutilizzare le costanti di stringa**  
  
     Si utilizza lo stesso valore due volte in un **STRINGTABLE** istruzione. Assicurarsi che non si stia sovrapposti valori decimali ed esadecimali. Ogni ID in un **STRINGTABLE** deve essere univoco. Per la massima efficienza, utilizzare costanti contigue a partire da un multiplo di 16.  
  
8.  **Controllare il carattere non compreso nell'intervallo [^ A - ^ Z]**  
  
     Un carattere di controllo nell'istruzione **ACCELERATORS** non è valido. Il carattere che segue l'accento circonflesso (**^**) deve essere compreso tra A e Z incluse.  
  
9. **Menu vuoti non consentiti**  
  
     Un **fine** parola chiave viene visualizzata prima che le voci del menu sono definite nel **MENU** istruzione. Il compilatore di risorse non supporta i menu vuoti. Assicurarsi che non si dispone delle eventuali virgolette aperte all'interno di **MENU** istruzione.  
  
10. **END previsto nella finestra di dialogo**  
  
     Il **fine** (parola chiave) deve verificarsi alla fine di un **finestra di dialogo** istruzione. Assicurarsi che non vi siano virgolette aperte a sinistra dell'istruzione precedente.  
  
11. **END previsto in menu**  
  
     La parola chiave **END** deve essere specificata alla fine di un'istruzione **MENU** . Verificare che non siano presenti virgolette inglesi aperte o che il numero di istruzioni **BEGIN** corrisponda a quello delle istruzioni **END** .  
  
12. **Prevista virgola nella tabella di tasti di scelta rapida**  
  
     Il compilatore di risorse richiede una virgola tra i campi `event` e *idvalue* nell'istruzione **ACCELERATORS** .  
  
13. **Nome della classe controllo previsto**  
  
     Il `class` campo di un **controllo** istruzione nel **finestra di dialogo** istruzione deve essere uno dei seguenti tipi: BUTTON, COMBOBOX, EDIT, LISTBOX, barra di scorrimento, statico, o definito dall'utente. Verificare che la classe sia stata digitata correttamente.  
  
14. **Previsto nome**  
  
     Il campo *typeface* dell'opzione FONT nell'istruzione **DIALOG** deve essere una stringa di caratteri ASCII racchiusa tra virgolette doppie. Questo campo specifica il nome di un tipo di carattere.  
  
15. **Previsto valore ID per menuitem**  
  
     L'istruzione **MENU** deve contenere un campo *menuID* che specifica il nome o il numero che identifica la risorsa di menu.  
  
16. **Prevista stringa menu.**  
  
     Ogni istruzione **MENUITEM** e **POPUP** deve contenere un campo di *testo* che è una stringa racchiusa tra virgolette doppie che specifica il nome della voce di menu o del menu popup. Oggetto **MENUITEM separatore** istruzione è richiesta alcuna stringa tra virgolette.  
  
17. **Previsto valore numerico di comando**  
  
     Il compilatore di risorse era previsto un valore numerico *idvalue* campo il **tasti di scelta rapida** istruzione. Assicurarsi di avere usato una `#define` costante per specificare il valore e che la costante sia stata digitata correttamente.  
  
18. **Prevista costante numerica nella tabella di stringhe**  
  
     Una costante numerica, definita in un'istruzione `#define` , deve seguire immediatamente la parola chiave **BEGIN** in un'istruzione **STRINGTABLE** .  
  
19. **Previsto dimensioni con punti numerici**  
  
     Il campo *pointsize* dell'opzione FONT nell'istruzione **DIALOG** deve essere un valore di dimensione in punti integer.  
  
20. **Prevista costante numerica finestra di dialogo**  
  
     Oggetto **finestra di dialogo** istruzione richiede valori integer per il *x, y, larghezza*, e *altezza* campi. Assicurarsi che tali valori siano inclusi dopo il **finestra di dialogo** (parola chiave) e che non siano negativi.  
  
21. **Prevista stringa in STRINGTABLE**  
  
     È prevista una stringa dopo ogni valore *stringid* in un'istruzione **STRINGTABLE** .  
  
22. **È prevista una stringa o un comando di tasti di scelta rapida costanti**  
  
     Il compilatore di risorse non è riuscito a determinare il tipo di tasto configurato per il tasto di scelta rapida. Il campo `event` nell'istruzione **ACCELERATORS** potrebbe non essere valido.  
  
23. **Previsto numero per ID**  
  
     Era previsto un numero per il `id` campo di un'istruzione di controllo nel **finestra di dialogo** istruzione. Assicurarsi di disporre di un numero o `#define` istruzione per l'ID di controllo.  
  
24. **Prevista stringa tra virgolette nella classe di finestra di dialogo**  
  
     Il campo `class` dell'opzione CLASS nell'istruzione **DIALOG** deve essere un numero intero o una stringa racchiusa tra virgolette doppie.  
  
25. **Prevista stringa tra virgolette nel titolo di finestra di dialogo**  
  
     Il campo `captiontext` dell'opzione CAPTION nell'istruzione **DIALOG** deve essere una stringa di caratteri ASCII racchiusa tra virgolette doppie.  
  
26. **File non trovato: filename**  
  
     Non è stato trovato il file specificato nella riga di comando del compilatore di risorse. Verificare che il file non sia stato spostato in un'altra directory e che il nome del file o il percorso sia stato digitato correttamente. Vengono eseguita la ricerca di file per l'utilizzo di **INCLUDE** variabile di ambiente o l'impostazione Visual Workbench, se disponibile.  
  
27. **Tipi di carattere devono essere numeri ordinali**  
  
     Il *pointsize* nell'istruzione carattere deve essere un numero intero, non è una stringa.  
  
28. **Tasto di scelta rapida**  
  
     Un campo `event` nell'istruzione **ACCELERATORS** non è stato riconosciuto o contiene più di due caratteri.  
  
29. **Tipo di tasto di scelta rapida (ASCII o VIRTKEY)**  
  
     Il campo `type` nell'istruzione **ACCELERATORS** deve contenere il valore ASCII o VIRTKEY.  
  
30. **Carattere di controllo non valido**  
  
     Un carattere di controllo nell'istruzione **ACCELERATORS** non è valido. Un carattere di controllo valido è costituito da una lettera (solo) in seguito a un accento circonflesso (^).  
  
31. **Tipo di controllo non valido**  
  
     Ogni istruzione di controllo in un **finestra di dialogo** istruzione deve essere uno dei seguenti: casella di controllo COMBOBOX, controllo, CTEXT, DEFPUSHBUTTON, EDITTEXT, GROUPBOX, ICONA, LISTBOX, LTEXT, PUSHBUTTON, RADIOBUTTON, RTEXT, barra di scorrimento. Assicurarsi che queste istruzioni di controllo siano state digitate correttamente.  
  
32. **Tipo non valido**  
  
     Il tipo di risorsa non è presente tra i tipi definiti nel file di Windows. h.  
  
33. **Stringa di testo o ordinale previsto nel controllo**  
  
     Il *testo* campo di un **controllo** istruzione il **finestra di dialogo** istruzione deve essere una stringa di testo o un riferimento ordinale al tipo di controllo. Se si usa un ordinale, assicurarsi di avere un'istruzione `#define` per il controllo.  
  
34. **Parentesi non corrispondenti.**  
  
     Assicurarsi di aver chiuso tutte le parentesi aperte **finestra di dialogo** istruzione.  
  
35. **Valore non previsto in RCData**  
  
     I valori *raw-data* nell'istruzione **RCDATA** devono essere stringhe o numeri interi separati da una virgola. Assicurarsi di non aver escluso una virgola o una virgoletta da una stringa.  
  
36. **Sottotipo sconosciuto di un menu**  
  
     Il *definizione di elemento* campo il **MENU** istruzione può contenere solo **MENUITEM** e **POPUP** istruzioni.