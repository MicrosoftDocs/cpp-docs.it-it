---
title: "Percorsi di ricerca nelle regole | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regole di inferenza in NMAKE"
  - "regole, inferenza"
  - "percorsi di ricerca nelle regole di inferenza di NMAKE"
ms.assetid: 38feded6-536d-425d-bf40-fff3173a5506
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Percorsi di ricerca nelle regole
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

```  
{frompath}.fromext{topath}.toext:  
   commands  
```  
  
## Osservazioni  
 Una regola di inferenza viene applicata a una dipendenza solo se i percorsi specificati nella dipendenza corrispondono esattamente ai percorsi della regola di inferenza.  La directory del dipendente deve essere specificata in *frompath* e quella della destinazione in *topath*. Non è consentito l'uso di spazi.  Specificare un solo percorso per ciascuna estensione.  La presenza di un percorso per un'estensione richiede un percorso per l'altra.  Per specificare la directory corrente, utilizzare un punto \(.\) o parentesi graffe vuote \({ }\).  Le macro possono rappresentare *frompath* e *topath* e vengono richiamate durante la pre\-elaborazione.  
  
## Esempio  
  
### Codice  
  
```  
{dbi\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUDBI) $<  
  
{ilstore\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{misc\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{misc\}.c{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{msf\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{bsc\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{mre\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{namesrvr\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{src\cvr\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
```  
  
## Vedere anche  
 [Definizione di una regola](../build/defining-a-rule.md)