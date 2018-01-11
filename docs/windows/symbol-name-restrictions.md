---
title: Restrizioni relative ai nomi dei simboli | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.symbol.restrictions.name
dev_langs: C++
helpviewer_keywords:
- symbol names
- symbols, names
- restrictions, symbol names
ms.assetid: 4ae7f695-ca86-4f4b-989a-fe6f89650ff7
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d82720142517468fffd4388f000f3830e8edb4ff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="symbol-name-restrictions"></a>Restrizioni relative ai nomi dei simboli
I nomi dei simboli sono soggetti alle restrizioni riportate di seguito.  
  
-   Tutti [simboli](../windows/symbols-resource-identifiers.md) deve essere univoco all'interno dell'ambito dell'applicazione. In questo modo si evitano conflitti tra le definizioni dei simboli nei file di intestazione.  
  
-   I caratteri validi per il nome di un simbolo includono i caratteri maiuscoli e minuscoli dalla A alla Z, i numeri da 0 a 9 e i caratteri di sottolineatura ( _ ).  
  
-   I nomi dei simboli non possono iniziare con un numero e sono limitati a 247 caratteri.  
  
-   I nomi dei simboli non possono contenere spazi.  
  
-   Ai nomi dei simboli non viene applicata la distinzione tra maiuscole e minuscole. I caratteri maiuscoli o minuscoli della prima definizione del simbolo vengono tuttavia mantenuti. Il file di intestazione che definisce i simboli viene usato sia dal compilatore e dall'editor di risorse sia da uno o più programmi C++ per fare riferimento alle risorse definite in un file di risorse. Se due nomi di simbolo differiscono solo nell'utilizzo di lettere maiuscole e minuscole, nel programma C++ verranno visualizzati due simboli separati, mentre nel compilatore e nell'editor di risorse verranno visualizzati entrambi i nomi come se facessero riferimento a un unico simbolo.  
  
    > [!NOTE]
    >  Se non ci si attiene allo schema dei nomi di simbolo standard illustrato di seguito (ID*_[parola chiave]) e il nome del simbolo coincide con una parola chiave nota al compilatore dello script di risorsa, il tentativo di compilare il file script di risorsa determinerà una generazione di errori apparentemente casuale, difficile da diagnosticare. Per evitare questo problema, è necessario attenersi allo schema di denominazione standard.  
  
 I nomi dei simboli dispongono di prefissi descrittivi che indicano il tipo di risorsa o di oggetto che rappresentano. Tali prefissi descrittivi iniziano con l'ID di combinazione testo. La libreria MFC usa le convenzioni di denominazione dei simboli illustrate nella tabella seguente.  
  
|Category|Prefisso|Usa|  
|--------------|------------|---------|  
|Risorse|IDR_ IDD_ IDC_ IDI_ IDB_|Bitmap dell'icona del cursore della finestra di dialogo del tasto di scelta rapida o menu (risorse associate o personalizzate)|  
|Voci di menu|ID_|Voce di menu|  
|Comandi:|ID_|Comando|  
|Controlli e finestra figlio|IDC_|Control|  
|Stringhe|IDS_|Stringa nella tabella di stringhe|  
|MFC|AFX_|Riservati per simboli MFC predefiniti|  
  

  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di un simbolo o il nome del simbolo (ID)](../windows/changing-a-symbol-or-symbol-name-id.md)   
 [Restrizioni relative ai valori di simboli](../windows/symbol-value-restrictions.md)   
 [ID simbolo predefiniti](../windows/predefined-symbol-ids.md)