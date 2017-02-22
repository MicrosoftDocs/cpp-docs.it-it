---
title: "section | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "section_CPP"
  - "vc-pragma.section"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pragma, section"
  - "section (pragma)"
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# section
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea una sezione in un file obj.  
  
## Sintassi  
  
```  
  
#pragma section( "section-name" [, attributes] )  
```  
  
## Note  
 In questo argomento il significato dei termini *segmento* e *sezione* sono intercambiabili.  
  
 Una sezione, una volta definita, rimarrà valida per il resto della compilazione.  Tuttavia, è necessario utilizzare [\_\_declspec\(allocate\)](../cpp/allocate.md) o non verrà inserito alcun dato nella sezione.  
  
 *section\-name* è un parametro obbligatorio che sarà il nome della sezione.  Il nome non deve essere in conflitto con alcun nome di sezione standard.  Per un elenco di nomi che non è necessario utilizzare quando si crea una sezione, vedere [\/SECTION](../build/reference/section-specify-section-attributes.md).  
  
 `attributes` è un parametro facoltativo che è costituito da uno o più attributi delimitati da virgole che si desidera assegnare alla sezione.  `attributes` possibili sono:  
  
 **read**  
 Consente operazioni di lettura sui dati.  
  
 **write**  
 Consente operazioni di scrittura sui dati.  
  
 **execute**  
 Consente l'esecuzione di codice.  
  
 **condiviso**  
 Condivide la sezione tra tutti i processi che caricano l'immagine.  
  
 **nopage**  
 Contrassegna la sezione come non paginabile; utile per i driver di dispositivo Win32.  
  
 **nocache**  
 Contrassegna la sezione come non memorizzabile nella cache; utile per i driver di dispositivo Win32.  
  
 **discard**  
 Contrassegna la sezione come annullabile; utile per i driver di dispositivo Win32.  
  
 **remove**  
 Contrassegna la sezione come non residente in memoria; solo per driver di dispositivo virtuali \(V*x*D\).  
  
 Se non si specificano attributi, la sezione avrà attributi di lettura e scrittura.  
  
## Esempio  
 Nell'esempio seguente, la prima istruzione identifica la sezione e i relativi attributi.  L'Integer `j` non viene inserito in `mysec` poiché non è stato dichiarato con `__declspec(allocate)`; `j` viene immesso nella sezione di dati.  L'Integer `i` viene immesso in `mysec` come risultato del relativo attributo della classe di archiviazione `__declspec(allocate)`.  
  
```  
// pragma_section.cpp  
#pragma section("mysec",read,write)  
int j = 0;  
  
__declspec(allocate("mysec"))  
int i = 0;  
  
int main(){}  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)