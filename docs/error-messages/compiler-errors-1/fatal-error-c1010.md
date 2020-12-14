---
description: 'Altre informazioni su: errore irreversibile C1010'
title: Errore irreversibile C1010
ms.date: 09/03/2019
f1_keywords:
- C1010
helpviewer_keywords:
- C1010
ms.assetid: dfd035f1-a7a2-40bc-bc92-dc4d7f456767
ms.openlocfilehash: 2c6d57b2390f727e37d546d7077217e25db40fef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262529"
---
# <a name="fatal-error-c1010"></a>Errore irreversibile C1010

> fine file imprevista durante la ricerca dell'intestazione precompilata. Si è omesso di aggiungere ' #include *Name*' all'origine?

## <a name="remarks"></a>Commenti

Un file di inclusione specificato da [/Yu](../../build/reference/yu-use-precompiled-header-file.md) non è elencato nel file di origine. Questa opzione è abilitata per impostazione predefinita in molti tipi di progetto Visual Studio C++. Il file di inclusione predefinito specificato da questa opzione è *PCH. h* o *stdafx. h* in Visual Studio 2017 e versioni precedenti.

Nell'ambiente Visual Studio usare uno dei metodi seguenti per risolvere l'errore:

- Assicurarsi di non aver eliminato, rinominato o rimosso inavvertitamente il file di intestazione *PCH. h* o il file di origine *PCH. cpp* dal progetto corrente. Nei progetti precedenti, questi file possono essere denominati *stdafx. h* e *stdafx. cpp*.

- Verificare che il file di intestazione *PCH* . h o *stdafx. h* sia incluso prima di qualsiasi altro codice o direttiva per il preprocessore nei file di origine. In Visual Studio questo file di intestazione viene specificato dalla proprietà del progetto del **file di intestazione precompilata** .

- È possibile disattivare l'utilizzo dell'intestazione precompilata. Se si disattivano le intestazioni precompilate, è possibile che si verifichino gravi conseguenze sulle prestazioni di compilazione.

### <a name="to-turn-off-precompiled-headers"></a>Per disattivare le intestazioni precompilate

Per disattivare l'utilizzo di intestazioni precompilate in un progetto, attenersi alla procedura seguente:

1. Nella finestra di **Esplora soluzioni** , fare clic con il pulsante destro del mouse sul nome del progetto, quindi scegliere **Proprietà** per aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. Nell'elenco a discesa **configurazione** selezionare **tutte le configurazioni**.

1. Selezionare le **proprietà di configurazione**  >  pagina delle proprietà intestazioni precompilate **C/C++**  >   .

1. Nell'elenco delle proprietà selezionare l'elenco a discesa per la proprietà dell' **intestazione precompilata** , quindi scegliere **non usare intestazioni precompilate**. Scegliere **OK** per salvare le modifiche.

1. Nella finestra di **Esplora soluzioni** , fare clic con il pulsante destro del mouse sul file di origine *PCH. cpp* nel progetto. (Nei progetti precedenti, il file potrebbe essere denominato *stdafx. cpp*). Scegliere **Escludi dal progetto** per rimuoverlo dalla compilazione.

1. Usare il comando di menu **Compila**  >  **soluzione pulita** per ogni configurazione compilata, per eliminare tutti i file di *project_name PCH* nelle directory di compilazione intermedie.

## <a name="see-also"></a>Vedi anche

[File di intestazione precompilata](../../build/creating-precompiled-header-files.md)\
[/YC (crea il file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md)\
[/Yu (Usa il file di intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md)
