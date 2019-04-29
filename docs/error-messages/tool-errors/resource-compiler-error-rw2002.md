---
title: Errore del compilatore di risorse RW2002
ms.date: 11/04/2016
f1_keywords:
- RW2002
helpviewer_keywords:
- RW2002
ms.assetid: b1d1a49b-b50b-4b0b-9f09-c7762e2dbe8f
ms.openlocfilehash: 4cd922fff691b524ec9d278ac5948992fc096e09
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396784"
---
# <a name="resource-compiler-error-rw2002"></a>Errore del compilatore di risorse RW2002

Errore di analisi

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. **Tipo di acceleratore richiesto (ASCII o VIRTKEY)**

   Il campo `type` nell'istruzione **ACCELERATORS** deve contenere il valore ASCII o VIRTKEY.

1. **BEGIN previsto nella tabella di tasti di scelta rapida**

   La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **ACCELERATORS** .

1. **BEGIN previsto nella finestra di dialogo**

   Il **BEGIN** parola deve seguire immediatamente la **dialogo** (parola chiave).

1. **BEGIN previsto in menu**

   La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **MENU** .

1. **BEGIN previsto in RCData**

   La parola chiave **BEGIN** deve seguire immediatamente la parola chiave **RCDATA** .

1. **Previsto BEGIN nella tabella di stringhe**

   Il **BEGIN** parola deve seguire immediatamente la **STRINGTABLE** (parola chiave).

1. **non è possibile riutilizzare le costanti di stringa**

   Si usa lo stesso valore due volte in un **STRINGTABLE** istruzione. Assicurarsi che non si stia sovrapposizione valori decimali ed esadecimali. Ogni ID in un **STRINGTABLE** devono essere univoci. Per ottenere la massima efficienza, utilizzare le costanti contigue che avviano un multiplo di 16.

1. **Carattere non compreso nell'intervallo di controllo [^ A - ^ Z]**

   Un carattere di controllo nell'istruzione **ACCELERATORS** non è valido. Il carattere che segue l'accento circonflesso (**^**) deve essere compreso tra A e Z incluse.

1. **menu vuoti non consentiti**

   Un' **finali** parola chiave viene visualizzata prima che le voci del menu sono definite nel **MENU** istruzione. Il compilatore di risorse non supporta i menu vuoti. Assicurarsi che non siano presenti virgolette aperte all'interno di **MENU** istruzione.

1. **END previsto nella finestra di dialogo**

   Il **END** parola chiave deve verificarsi alla fine di un **dialogo** istruzione. Assicurarsi che non siano presenti virgolette aperte rimasti in seguito all'istruzione precedente.

1. **END previsto in menu**

   La parola chiave **END** deve essere specificata alla fine di un'istruzione **MENU** . Verificare che non siano presenti virgolette inglesi aperte o che il numero di istruzioni **BEGIN** corrisponda a quello delle istruzioni **END** .

1. **Prevista virgola nella tabella di tasti di scelta rapida**

   Il compilatore di risorse richiede una virgola tra i campi `event` e *idvalue* nell'istruzione **ACCELERATORS** .

1. **nome della classe controllo previsto**

   Il `class` campo di un **controllo** istruzione nel **dialogo** istruzione deve essere uno dei seguenti tipi: PULSANTE, casella combinata, modifica, LISTBOX, della barra di scorrimento, statico, o definito dall'utente. Assicurarsi che la classe sia stata digitata correttamente.

1. **Previsto nome del tipo di carattere**

   Il campo *typeface* dell'opzione FONT nell'istruzione **DIALOG** deve essere una stringa di caratteri ASCII racchiusa tra virgolette doppie. Questo campo specifica il nome di un tipo di carattere.

1. **Previsto valore ID per menuitem**

   L'istruzione **MENU** deve contenere un campo *menuID* che specifica il nome o il numero che identifica la risorsa di menu.

1. **Prevista stringa di menu**

   Ogni istruzione **MENUITEM** e **POPUP** deve contenere un campo di *testo* che è una stringa racchiusa tra virgolette doppie che specifica il nome della voce di menu o del menu popup. Oggetto **MENUITEM separatore** istruzione è richiesta alcuna stringa tra virgolette.

1. **previsto valore numerico di comando**

   Il compilatore di risorse era in attesa di un valore numerico *idvalue* campo le **ACCELERATORI** istruzione. Assicurarsi che sia stato usato un `#define` costante per specificare il valore e che la costante sia stata digitata correttamente.

1. **Prevista costante numerica nella tabella di stringhe**

   Una costante numerica, definita in un'istruzione `#define` , deve seguire immediatamente la parola chiave **BEGIN** in un'istruzione **STRINGTABLE** .

1. **Previsto dimensioni con punti numerici**

   Il campo *pointsize* dell'opzione FONT nell'istruzione **DIALOG** deve essere un valore di dimensione in punti integer.

1. **Prevista costante numerica finestra di dialogo**

   Oggetto **finestra di dialogo** istruzione richiede valori integer per il *x, y, larghezza*, e *altezza* campi. Assicurarsi che questi valori sono inclusi dopo il **dialogo** (parola chiave) e che non siano negativi.

1. **È prevista una stringa in STRINGTABLE**

   È prevista una stringa dopo ogni valore *stringid* in un'istruzione **STRINGTABLE** .

1. **È prevista una stringa o un comando di tasti di scelta rapida costanti**

   Il compilatore di risorse non è riuscito a determinare il tipo di tasto configurato per il tasto di scelta rapida. Il campo `event` nell'istruzione **ACCELERATORS** potrebbe non essere valido.

1. **previsto numero per ID**

   È previsto un numero per il `id` campo di un'istruzione di control nel **finestra di dialogo** istruzione. Assicurarsi di avere un numero o `#define` istruzione per l'ID del controllo.

1. **Prevista stringa tra virgolette nella classe di finestra di dialogo**

   Il campo `class` dell'opzione CLASS nell'istruzione **DIALOG** deve essere un numero intero o una stringa racchiusa tra virgolette doppie.

1. **Prevista stringa tra virgolette nel titolo di finestra di dialogo**

   Il campo `captiontext` dell'opzione CAPTION nell'istruzione **DIALOG** deve essere una stringa di caratteri ASCII racchiusa tra virgolette doppie.

1. **file non trovato: filename**

   Non è stato trovato il file specificato nella riga di comando del compilatore di risorse. Verificare che il file non sia stato spostato in un'altra directory e che il nome del file o il percorso sia stato digitato correttamente. I file vengono cercati tramite il **inclusione** variabile di ambiente o l'impostazione di Workbench Visual, se disponibile.

1. **I tipi di carattere devono essere numeri ordinali**

   Il *pointsize* nell'istruzione del tipo di carattere deve essere un numero intero, non è una stringa.

1. **Tasti di scelta rapida non valido**

   Un campo `event` nell'istruzione **ACCELERATORS** non è stato riconosciuto o contiene più di due caratteri.

1. **Tipo di acceleratore non valido (ASCII o VIRTKEY)**

   Il campo `type` nell'istruzione **ACCELERATORS** deve contenere il valore ASCII o VIRTKEY.

1. **carattere di controllo non valido**

   Un carattere di controllo nell'istruzione **ACCELERATORS** non è valido. Un carattere di controllo valido è costituito da una lettera (solo) segue un accento circonflesso (^).

1. **tipo di controllo non valido**

   Ogni istruzione di controllo in una **dialogo** istruzione deve essere uno dei seguenti: CHECKBOX, COMBOBOX, CONTROL, CTEXT, DEFPUSHBUTTON, EDITTEXT, GROUPBOX, ICON, LISTBOX, LTEXT, PUSHBUTTON, RADIOBUTTON, RTEXT, SCROLLBAR. Assicurarsi che queste istruzioni di controllo siano state digitate correttamente.

1. **Tipo non valido**

   Il tipo di risorsa non è tra i tipi definiti nel file di Windows. h.

1. **Stringa di testo o ordinale previsto nel controllo**

   Il *testo* campo di un **controllo** istruzione nel **dialogo** istruzione deve essere una stringa di testo o un riferimento ordinale al tipo di controllo. Se si usa un ordinale, assicurarsi di avere un'istruzione `#define` per il controllo.

1. **Parentesi non corrispondenti**

   Assicurarsi di aver chiuso tutte le parentesi aperte **dialogo** istruzione.

1. **Valore non previsto in RCData**

   I valori *raw-data* nell'istruzione **RCDATA** devono essere stringhe o numeri interi separati da una virgola. Assicurarsi di non aver escluso una virgola o una virgoletta da una stringa.

1. **sottotipo di menu sconosciuta**

   Il *definizione di elemento* campo del **dal MENU** istruzione può contenere solo **MENUITEM** e **POPUP** istruzioni.