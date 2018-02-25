---
title: Record utente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- records, user
- OLE DB providers, user record
- user records
- user records, described
- rowsets, user record
ms.assetid: 9c0d2864-2738-4f62-a750-1016d9c3523f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cbb073aceaff855de700eae6d8aede148f9b8bcc
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="user-record"></a>Record utente
Record utente fornisce la struttura di codice e i dati che rappresenta i dati della colonna per un set di righe. Un record utente può essere creato in fase di compilazione o in fase di esecuzione. Quando si crea un provider tramite la creazione guidata Provider OLE DB ATL, la procedura guidata crea un record utente predefinito che è simile al seguente (supponendo che venga specificato un nome di provider [nome breve] di "MyProvider"):  
  
```  
class CWindowsFile:  
   public WIN32_FIND_DATA  
{  
public:  
  
BEGIN_PROVIDER_COLUMN_MAP(CMyProviderWindowsFile)  
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)  
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)  
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)  
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)  
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)  
END_PROVIDER_COLUMN_MAP()  
  
};  
```  
  
 Tutte le specifiche OLE DB relative alle interazioni con il client di gestire i modelli di provider OLE DB. Per acquisire i dati di colonna necessari per una risposta, il provider chiama il `GetColumnInfo` funzione, è necessario inserire nel record utente. È possibile eseguire l'override esplicito `GetColumnInfo` nel record utente, ad esempio, dichiarando nel file con estensione h come illustrato di seguito:  
  
```  
template <class T>  
static ATLCOLUMNINFO* GetColumnInfo(T* pThis, ULONG* pcCols)   
```  
  
 Equivale a:  
  
```  
static ATLCOLUMNINFO* GetColumnInfo(CommandClass* pThis, ULONG* pcCols)  
static ATLCOLUMNINFO* GetColumnInfo(RowsetClass* pThis, ULONG* pcCols)  
```  
  
 È inoltre necessario implementare `GetColumnInfo` nel file. cpp del record utente.  
  
 Le macro PROVIDER_COLUMN_MAP aiuto per la creazione di un `GetColumnInfo` funzione:  
  
-   BEGIN_PROVIDER_COLUMN_MAP definisce il prototipo di funzione e una matrice statica di **ATLCOLUMNINFO** strutture.  
  
-   PROVIDER_COLUMN_ENTRY definisce e Inizializza un singolo **ATLCOLUMNINFO**.  
  
-   END_PROVIDER_COLUMN_MAP chiude la matrice e la funzione. Inserisce inoltre il numero di elementi nella matrice di `pcCols` parametro.  
  
 Quando viene creato un record utente in fase di esecuzione **GetColumnInfo** utilizza il `pThis` parametro per ricevere un puntatore a un'istanza del set di righe o di comando. Comandi e i set di righe deve supportare il `IColumnsInfo` interfaccia, in modo da questo puntatore è possibile ottenere informazioni sulle colonne.  
  
 **CommandClass** e **RowsetClass** sono il comando e un set di righe che utilizzano il record utente.  
  
 Per un esempio più dettagliato di come eseguire l'override `GetColumnInfo` in un record utente, vedere [determinazione dinamica delle colonne restituite al Consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)