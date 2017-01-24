---
title: "Classe CDC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDC (classe)"
  - "coordinates in Windows 95/98 [C++]"
  - "device contexts [C++], CDC (classe)"
  - "screen coordinates in device contexts"
  - "Windows [C++], device contexts"
  - "Windows 95 [C++], coordinate dello schermo"
  - "Windows 98 [C++], coordinate dello schermo"
ms.assetid: 715b3334-cb2b-4c9c-8067-02eb7c66c8b2
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce una classe di oggetti di contesto di dispositivo.  
  
## Sintassi  
  
```  
class CDC : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::CDC](../Topic/CDC::CDC.md)|Costruisce un oggetto `CDC`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::AbortDoc](../Topic/CDC::AbortDoc.md)|Termina il processo di stampa corrente, deselezionando tutto che l'applicazione ha scritto nel dispositivo dall'ultima chiamata della funzione membro `StartDoc`.|  
|[CDC::AbortPath](../Topic/CDC::AbortPath.md)|Chiude e rimuove tutti i percorsi nel contesto di dispositivo.|  
|[CDC::AddMetaFileComment](../Topic/CDC::AddMetaFileComment.md)|Copia il commento da un buffer\) in specificate di avanzato\- formato.|  
|[CDC::AlphaBlend](../Topic/CDC::AlphaBlend.md)|Visualizzare le bitmap con pixel trasparenti o semitrasparenti.|  
|[CDC::AngleArc](../Topic/CDC::AngleArc.md)|Disegna un segmento di linea e un arco e spostare la posizione corrente verso il punto finale dell'arco.|  
|[CDC::Arc](../Topic/CDC::Arc.md)|Consente di tracciare un arco ellittico.|  
|[CDC::ArcTo](../Topic/CDC::ArcTo.md)|Consente di tracciare un arco ellittico.  Questa funzione è simile a `Arc`, con la differenza che la posizione corrente viene aggiornata.|  
|[CDC::Attach](../Topic/CDC::Attach.md)|Associa un contesto di dispositivo di Windows a questo oggetto `CDC`.|  
|[CDC::BeginPath](../Topic/CDC::BeginPath.md)|Apre una parentesi del percorso nel contesto di dispositivo.|  
|[CDC::BitBlt](../Topic/CDC::BitBlt.md)|Copia una bitmap da un contesto di dispositivo specificato.|  
|[CDC::Chord](../Topic/CDC::Chord.md)|Estrae una corda \(una figura chiusa limitata dall'intersezione di un'ellisse e un segmento di riga.|  
|[CDC::CloseFigure](../Topic/CDC::CloseFigure.md)|Chiude una figura aperta in un percorso.|  
|[CDC::CreateCompatibleDC](../Topic/CDC::CreateCompatibleDC.md)|Crea un contesto di dispositivo di memoria compatibile con un altro contesto di dispositivo.  È possibile utilizzarlo per preparare le immagini in memoria.|  
|[CDC::CreateDC](../Topic/CDC::CreateDC.md)|Crea un contesto di dispositivo per un dispositivo specifico.|  
|[CDC::CreateIC](../Topic/CDC::CreateIC.md)|Crea un contesto di informazioni per un dispositivo specifico.  Ciò fornisce un modo rapido per ottenere informazioni sul dispositivo senza creare un contesto di dispositivo.|  
|[CDC::DeleteDC](../Topic/CDC::DeleteDC.md)|Elimina il contesto di dispositivo Windows associato a questo oggetto `CDC`.|  
|[CDC::DeleteTempMap](../Topic/CDC::DeleteTempMap.md)|Chiamato dal gestore del tempo di inattività `CWinApp` per eliminare qualsiasi oggetto temporaneo `CDC` creato da `FromHandle`.  Rimuove anche il contesto di dispositivo.|  
|[CDC::Detach](../Topic/CDC::Detach.md)|Rimuove il contesto di dispositivo di Windows da questo oggetto `CDC`.|  
|[CDC::DPtoHIMETRIC](../Topic/CDC::DPtoHIMETRIC.md)|Converte le unità in unità **HIMETRIC**.|  
|[CDC::DPtoLP](../Topic/CDC::DPtoLP.md)|Converte le unità in unità logiche.|  
|[CDC::Draw3dRect](../Topic/CDC::Draw3dRect.md)|Consente di disegnare un rettangolo tridimensionale.|  
|[CDC::DrawDragRect](../Topic/CDC::DrawDragRect.md)|I vengono annullate e ridisegna un rettangolo quando viene trascinato.|  
|[CDC::DrawEdge](../Topic/CDC::DrawEdge.md)|Estrae i bordi di un rettangolo.|  
|[CDC::DrawEscape](../Topic/CDC::DrawEscape.md)|Accede alle funzionalità di disegno di un display per la visualizzazione che non sono direttamente disponibili nei Graphics Device Interface \(GDI\).|  
|[CDC::DrawFocusRect](../Topic/CDC::DrawFocusRect.md)|Consente di disegnare un rettangolo nello stile utilizzato per indicare lo stato attivo.|  
|[CDC::DrawFrameControl](../Topic/CDC::DrawFrameControl.md)|Creare un controllo frame.|  
|[CDC::DrawIcon](../Topic/CDC::DrawIcon.md)|Consente di disegnare icona.|  
|[CDC::DrawState](../Topic/CDC::DrawState.md)|Visualizzare un'immagine e applicare un effetto visivo per indicare lo stato.|  
|[CDC::DrawText](../Topic/CDC::DrawText.md)|Estrae il testo formattato nel rettangolo specificato.|  
|[CDC::DrawTextEx](../Topic/CDC::DrawTextEx.md)|Estrae il testo formattato nel rettangolo specificato utilizzando formati aggiuntivi.|  
|[CDC::Ellipse](../Topic/CDC::Ellipse.md)|Disegna un ellisse.|  
|[CDC::EndDoc](../Topic/CDC::EndDoc.md)|Termina un processo di stampa avviato dalla funzione membro `StartDoc`.|  
|[CDC::EndPage](../Topic/CDC::EndPage.md)|Notifica al driver di dispositivo che una pagina in corso l'arresto.|  
|[CDC::EndPath](../Topic/CDC::EndPath.md)|Chiude una parentesi di percorso e selezionare il percorso definito da parentesi nel contesto di dispositivo.|  
|[CDC::EnumObjects](../Topic/CDC::EnumObjects.md)|Enumera penne e pennelli disponibili in un contesto di dispositivo.|  
|[CDC::Escape](../Topic/CDC::Escape.md)|Consente alle applicazioni di accedere a funzionalità che non sono direttamente disponibili da un determinato dispositivo con GDI.  Consente inoltre l'accesso alle funzioni di escape di Windows.  Le chiamate di escape apportate da un'applicazione vengono convertite e inviati al driver di dispositivo.|  
|[CDC::ExcludeClipRect](../Topic/CDC::ExcludeClipRect.md)|Crea una nuova area costituito dall'area esistente meno il rettangolo specificato.|  
|[CDC::ExcludeUpdateRgn](../Topic/CDC::ExcludeUpdateRgn.md)|Impedisce il disegno nelle aree non valide di una finestra escludendo un'area aggiornata nella finestra da un'area di ritaglio.|  
|[CDC::ExtFloodFill](../Topic/CDC::ExtFloodFill.md)|Riempie un'area di pennello corrente.  Offre maggiore flessibilità che la funzione membro [CDC::FloodFill](../Topic/CDC::FloodFill.md).|  
|[CDC::ExtTextOut](../Topic/CDC::ExtTextOut.md)|Genera una stringa di caratteri in un'area rettangolare tramite il tipo attualmente selezionata.|  
|[CDC::FillPath](../Topic/CDC::FillPath.md)|Chiusura delle figure aperte in qualsiasi percorso corrente e riempire l'interno del percorso tramite il pennello corrente e la modalità di riempimento poligoni.|  
|[CDC::FillRect](../Topic/CDC::FillRect.md)|Inserisce un rettangolo specificato utilizzando un pennello specifico.|  
|[CDC::FillRgn](../Topic/CDC::FillRgn.md)|Riempie un'area specifica di pennello specificato.|  
|[CDC::FillSolidRect](../Topic/CDC::FillSolidRect.md)|Inserisce un rettangolo a tinta unita.|  
|[CDC::FlattenPath](../Topic/CDC::FlattenPath.md)|Converte tutte le curve il percorso selezionato nel contesto di dispositivo corrente e trasforma ogni curva in una sequenza di linee.|  
|[CDC::FloodFill](../Topic/CDC::FloodFill.md)|Riempie un'area di pennello corrente.|  
|[CDC::FrameRect](../Topic/CDC::FrameRect.md)|Estrae un bordo intorno a un rettangolo.|  
|[CDC::FrameRgn](../Topic/CDC::FrameRgn.md)|Estrae un bordo intorno a un'area specifica utilizzando un pennello.|  
|[CDC::FromHandle](../Topic/CDC::FromHandle.md)|Restituisce un puntatore a un oggetto `CDC` una volta fornito un handle di un contesto di dispositivo.  Se un oggetto `CDC` non è connesso all'handle, un oggetto temporaneo `CDC` viene creato e allegato.|  
|[CDC::GetArcDirection](../Topic/CDC::GetArcDirection.md)|Restituisce la direzione corrente dell'arco del contesto di dispositivo.|  
|[CDC::GetAspectRatioFilter](../Topic/CDC::GetAspectRatioFilter.md)|Recupera l'impostazione per il filtro corrente dalla percentuale.|  
|[CDC::GetBkColor](../Topic/CDC::GetBkColor.md)|Recupera il colore di sfondo corrente.|  
|[CDC::GetBkMode](../Topic/CDC::GetBkMode.md)|Recupera la modalità in background.|  
|[CDC::GetBoundsRect](../Topic/CDC::GetBoundsRect.md)|Restituisce il rettangolo di delimitazione accumulato corrente del contesto di dispositivo specificato.|  
|[CDC::GetBrushOrg](../Topic/CDC::GetBrushOrg.md)|Recupera l'origine del pennello corrente.|  
|[CDC::GetCharABCWidths](../Topic/CDC::GetCharABCWidths.md)|Recupera la larghezza, in unità logiche, caratteri consecutivi in un intervallo specificato dal carattere corrente.|  
|[CDC::GetCharABCWidthsI](../Topic/CDC::GetCharABCWidthsI.md)|Recupera la larghezza, in unità logiche, indici di glifi consecutivi in un intervallo specificato dal tipo di carattere TrueType corrente.|  
|[CDC::GetCharacterPlacement](../Topic/CDC::GetCharacterPlacement.md)|Recupera i vari tipi di informazioni in una stringa di caratteri.|  
|[CDC::GetCharWidth](../Topic/CDC::GetCharWidth.md)|Recupera le larghezze frazionarie di caratteri consecutivi in un intervallo specificato dal carattere corrente.|  
|[CDC::GetCharWidthI](../Topic/CDC::GetCharWidthI.md)|Recupera la larghezza, le coordinate logiche, indici di glifi consecutivi in un intervallo specificato dal carattere corrente.|  
|[CDC::GetClipBox](../Topic/CDC::GetClipBox.md)|Recupera le dimensioni del rettangolo di delimitazione più ristretto sul limite corrente dell'area di visualizzazione.|  
|[CDC::GetColorAdjustment](../Topic/CDC::GetColorAdjustment.md)|Recupera i valori della regolazione di colore per il contesto di dispositivo.|  
|[CDC::GetCurrentBitmap](../Topic/CDC::GetCurrentBitmap.md)|Restituisce un puntatore all'oggetto attualmente selezionato `CBitmap`.|  
|[CDC::GetCurrentBrush](../Topic/CDC::GetCurrentBrush.md)|Restituisce un puntatore all'oggetto attualmente selezionato `CBrush`.|  
|[CDC::GetCurrentFont](../Topic/CDC::GetCurrentFont.md)|Restituisce un puntatore all'oggetto attualmente selezionato `CFont`.|  
|[CDC::GetCurrentPalette](../Topic/CDC::GetCurrentPalette.md)|Restituisce un puntatore all'oggetto attualmente selezionato `CPalette`.|  
|[CDC::GetCurrentPen](../Topic/CDC::GetCurrentPen.md)|Restituisce un puntatore all'oggetto attualmente selezionato `CPen`.|  
|[CDC::GetCurrentPosition](../Topic/CDC::GetCurrentPosition.md)|Recupera la posizione corrente della penna \(coordinate logiche\).|  
|[CDC::GetDCBrushColor](../Topic/CDC::GetDCBrushColor.md)|Recupera il colore corrente del pennello.|  
|[CDC::GetDCPenColor](../Topic/CDC::GetDCPenColor.md)|Recupera il colore della penna corrente.|  
|[CDC::GetDeviceCaps](../Topic/CDC::GetDeviceCaps.md)|Recupera un determinato tipo di informazioni specifiche del dispositivo sulle funzionalità specifiche dello schermo.|  
|[CDC::GetFontData](../Topic/CDC::GetFontData.md)|Recupera le informazioni metriche di carattere da un file di caratteri scalabile.  Le informazioni da recuperare sono identificate specificando un offset nel file del tipo e la lunghezza delle informazioni da restituire.|  
|[CDC::GetFontLanguageInfo](../Topic/CDC::GetFontLanguageInfo.md)|Restituisce informazioni sul tipo di carattere attualmente selezionata per il contesto di visualizzazione specificato.|  
|[CDC::GetGlyphOutline](../Topic/CDC::GetGlyphOutline.md)|Recupera la curva o la bitmap della struttura per un carattere della struttura nel carattere corrente.|  
|[CDC::GetGraphicsMode](../Topic/CDC::GetGraphicsMode.md)|Recupera il modo grafico corrente del contesto di dispositivo specificato.|  
|[CDC::GetHalftoneBrush](../Topic/CDC::GetHalftoneBrush.md)|Recupera un pennello mezzotono.|  
|[CDC::GetKerningPairs](../Topic/CDC::GetKerningPairs.md)|Recupera le coppie di crenatura di carattere per carattere attualmente selezionata nel contesto di dispositivo specificato.|  
|[CDC::GetLayout](../Topic/CDC::GetLayout.md)|Recupera il layout di un contesto di dispositivo \(DC\).  Il layout può essere da sinistra verso destra \(impostazione predefinita\) o da destra verso sinistra \(mirroring visualizzato\).|  
|[CDC::GetMapMode](../Topic/CDC::GetMapMode.md)|Recupera la modalità di mapping corrente.|  
|[CDC::GetMiterLimit](../Topic/CDC::GetMiterLimit.md)|Restituisce il limite di decorato per il contesto di dispositivo.|  
|[CDC::GetNearestColor](../Topic/CDC::GetNearestColor.md)|Recupera il colore logico più vicino a un colore logico specificato che il dispositivo specificato può rappresentare.|  
|[CDC::GetOutlineTextMetrics](../Topic/CDC::GetOutlineTextMetrics.md)|Recupera le informazioni metriche di carattere per i tipi di carattere TrueType.|  
|[CDC::GetOutputCharWidth](../Topic/CDC::GetOutputCharWidth.md)|Recupera le larghezze i singoli caratteri in un gruppo consecutivo di caratteri dal carattere corrente utilizzando il contesto del dispositivo di output.|  
|[CDC::GetOutputTabbedTextExtent](../Topic/CDC::GetOutputTabbedTextExtent.md)|Calcola la larghezza e l'altezza di una stringa di caratteri nel contesto del dispositivo di output.|  
|[CDC::GetOutputTextExtent](../Topic/CDC::GetOutputTextExtent.md)|Calcola la larghezza e l'altezza di una riga di testo sul contesto di dispositivo di output tramite il tipo corrente per determinare le dimensioni.|  
|[CDC::GetOutputTextMetrics](../Topic/CDC::GetOutputTextMetrics.md)|Recupera la metrica per il tipo corrente dal contesto del dispositivo di output.|  
|[CDC::GetPath](../Topic/CDC::GetPath.md)|Recupera le coordinate che definiscono gli endpoint delle righe e i punti di controllo curve presenti nel percorso selezionato nel contesto di dispositivo.|  
|[CDC::GetPixel](../Topic/CDC::GetPixel.md)|Recupera il valore di colore RGB di pixel al punto specificato.|  
|[CDC::GetPolyFillMode](../Topic/CDC::GetPolyFillMode.md)|Recupera la modalità di riempimento poligoni corrente.|  
|[CDC::GetROP2](../Topic/CDC::GetROP2.md)|Recupera la modalità di disegno corrente.|  
|[CDC::GetSafeHdc](../Topic/CDC::GetSafeHdc.md)|Restituisce [CDC::m\_hDC](../Topic/CDC::m_hDC.md), il contesto del dispositivo di output.|  
|[CDC::GetStretchBltMode](../Topic/CDC::GetStretchBltMode.md)|Recupera la modalità bitmap\- di adattamento corrente.|  
|[CDC::GetTabbedTextExtent](../Topic/CDC::GetTabbedTextExtent.md)|Calcola la larghezza e l'altezza di una stringa di caratteri nel contesto di dispositivo di attributo.|  
|[CDC::GetTextAlign](../Topic/CDC::GetTextAlign.md)|Recupera i flag di allineamento del testo.|  
|[CDC::GetTextCharacterExtra](../Topic/CDC::GetTextCharacterExtra.md)|Recupera l'impostazione corrente per la quantità di spaziatura di intercharacter.|  
|[CDC::GetTextColor](../Topic/CDC::GetTextColor.md)|Recupera il colore del testo corrente.|  
|[CDC::GetTextExtent](../Topic/CDC::GetTextExtent.md)|Calcola la larghezza e l'altezza di una riga di testo nel contesto di dispositivo di attributo tramite il tipo corrente per determinare le dimensioni.|  
|[CDC::GetTextExtentExPointI](../Topic/CDC::GetTextExtentExPointI.md)|Recupera il numero di caratteri in una stringa specificata entrerà in uno spazio specificato e inserisce una matrice di ambito del testo per ognuno di tali caratteri.|  
|[CDC::GetTextExtentPointI](../Topic/CDC::GetTextExtentPointI.md)|Recupera la larghezza e l'altezza della matrice specificata degli indici del glifo.|  
|[CDC::GetTextFace](../Topic/CDC::GetTextFace.md)|Copia il nome del carattere tipografico del carattere corrente di un buffer come stringa con terminazione null.|  
|[CDC::GetTextMetrics](../Topic/CDC::GetTextMetrics.md)|Recupera la metrica per il tipo corrente dal contesto di dispositivo di attributo.|  
|[CDC::GetViewportExt](../Topic/CDC::GetViewportExt.md)|Recupera x e y gli ambiti del riquadro di visualizzazione.|  
|[CDC::GetViewportOrg](../Topic/CDC::GetViewportOrg.md)|Recupera le coordinate x e y di origine del riquadro di visualizzazione.|  
|[CDC::GetWindow](../Topic/CDC::GetWindow.md)|Restituisce la finestra associata al contesto dello schermo.|  
|[CDC::GetWindowExt](../Topic/CDC::GetWindowExt.md)|Recupera x e y gli ambiti della finestra collegata.|  
|[CDC::GetWindowOrg](../Topic/CDC::GetWindowOrg.md)|Recupera le coordinate x e y dell'origine della finestra collegata.|  
|[CDC::GetWorldTransform](../Topic/CDC::GetWorldTransform.md)|Recupera la trasformazione corrente dello spazio dello spazio globale.|  
|[CDC::GradientFill](../Topic/CDC::GradientFill.md)|Riempie rettangolo e strutture di triangoli con un colore ridimensionano.|  
|[CDC::GrayString](../Topic/CDC::GrayString.md)|Draws è inattivo il testo in grigio\) nella posizione specificata.|  
|[CDC::HIMETRICtoDP](../Topic/CDC::HIMETRICtoDP.md)|Unità **HIMETRIC** converte in unità.|  
|[CDC::HIMETRICtoLP](../Topic/CDC::HIMETRICtoLP.md)|Unità **HIMETRIC** converte in unità logiche.|  
|[CDC::IntersectClipRect](../Topic/CDC::IntersectClipRect.md)|Crea una nuova area formando l'intersezione dell'area corrente e un rettangolo.|  
|[CDC::InvertRect](../Topic/CDC::InvertRect.md)|Inverte il contenuto di un rettangolo.|  
|[CDC::InvertRgn](../Topic/CDC::InvertRgn.md)|Inverte i colori in un'area.|  
|[CDC::IsPrinting](../Topic/CDC::IsPrinting.md)|Determina se il contesto di dispositivo viene utilizzato per stampare.|  
|[CDC::LineTo](../Topic/CDC::LineTo.md)|Disegna una linea dalla posizione corrente fino a, ma a esclusione di, un punto.|  
|[CDC::LPtoDP](../Topic/CDC::LPtoDP.md)|Converte le unità logiche in unità.|  
|[CDC::LPtoHIMETRIC](../Topic/CDC::LPtoHIMETRIC.md)|Converte le unità logiche in unità **HIMETRIC**.|  
|[CDC::MaskBlt](../Topic/CDC::MaskBlt.md)|Combina i dati di colore per le bitmap di origine e di destinazione utilizzando la maschera e dell'operazione raster specificate.|  
|[CDC::ModifyWorldTransform](../Topic/CDC::ModifyWorldTransform.md)|Modifica la trasformazione complessiva di un contesto di dispositivo utilizzando la modalità specificata.|  
|[CDC::MoveTo](../Topic/CDC::MoveTo.md)|Spostare la posizione corrente.|  
|[CDC::OffsetClipRgn](../Topic/CDC::OffsetClipRgn.md)|Sposta l'area di ridimensionamento del dispositivo specificato.|  
|[CDC::OffsetViewportOrg](../Topic/CDC::OffsetViewportOrg.md)|Modifica l'origine del riquadro di visualizzazione alle coordinate dell'origine corrente del riquadro di visualizzazione.|  
|[CDC::OffsetWindowOrg](../Topic/CDC::OffsetWindowOrg.md)|Modifica l'origine della finestra relativa alle coordinate dell'origine corrente della finestra.|  
|[CDC::PaintRgn](../Topic/CDC::PaintRgn.md)|Riempie un'area di pennello selezionato.|  
|[CDC::PatBlt](../Topic/CDC::PatBlt.md)|Crea uno schema di bit.|  
|[CDC::Pie](../Topic/CDC::Pie.md)|Disegna un cuneo grafico a torta\-formato.|  
|[CDC::PlayMetaFile](../Topic/CDC::PlayMetaFile.md)|Riproduce il contenuto di un metafile specificate nel dispositivo specificato.  La versione avanzata `PlayMetaFile` visualizzare l'immagine memorizzata in un metafile specificate di avanzato\- formato.  I metafile possono essere riprodotte un numero illimitato di volte.|  
|[CDC::PlgBlt](../Topic/CDC::PlgBlt.md)|Esegue un trasferimento di blocchi di bit di bit dei dati di colore dal rettangolo specificato nel contesto di dispositivo di origine al parallelogramma specificato nel contesto di dispositivo specificato.|  
|[CDC::PolyBezier](../Topic/CDC::PolyBezier.md)|Estrarre uno o più spline di Bzier.  La posizione corrente non viene utilizzata non aggiornata.|  
|[CDC::PolyBezierTo](../Topic/CDC::PolyBezierTo.md)|Estrarre uno o più spline di Bzier e spostare la posizione corrente verso il punto finale di ultime spline di Bzier.|  
|[CDC::PolyDraw](../Topic/CDC::PolyDraw.md)|Estrae un set di segmenti di riga e di spline di Bzier.  Questa funzione aggiorna la posizione corrente.|  
|[CDC::Polygon](../Topic/CDC::Polygon.md)|Consente di tracciare un poligono costituito da due o più punti \(vertici\) collegati da linee.|  
|[CDC::Polyline](../Topic/CDC::Polyline.md)|Estrae un set di segmenti della riga che connettono i punti definiti.|  
|[CDC::PolylineTo](../Topic/CDC::PolylineTo.md)|Disegna una o più linee rette e spostare la posizione corrente verso il punto finale dell'ultima riga.|  
|[CDC::PolyPolygon](../Topic/CDC::PolyPolygon.md)|Crea due o più i poligoni che sono riempiti con la modalità di riempimento poligoni corrente.  I poligoni possono essere disgiunte o possono sovrapporsi.|  
|[CDC::PolyPolyline](../Topic/CDC::PolyPolyline.md)|Estrae la serie di più segmenti di riga collegati.  La posizione corrente non viene utilizzata non aggiornata dalla funzione.|  
|[CDC::PtVisible](../Topic/CDC::PtVisible.md)|Specifica se il punto specificato consiste nell'area.|  
|[CDC::RealizePalette](../Topic/CDC::RealizePalette.md)|Esegue il mapping delle voci della tavolozza della tavolozza logica corrente alla tavolozza di sistema.|  
|[CDC::Rectangle](../Topic/CDC::Rectangle.md)|Consente di disegnare un rettangolo utilizzando la penna e del riempimento correnti utilizzando il pennello corrente.|  
|[CDC::RectVisible](../Topic/CDC::RectVisible.md)|Determina se una parte del rettangolo specificato si trova all'interno dell'area.|  
|[CDC::ReleaseAttribDC](../Topic/CDC::ReleaseAttribDC.md)|Rilascia `m_hAttribDC`, il contesto di dispositivo di attributo.|  
|[CDC::ReleaseOutputDC](../Topic/CDC::ReleaseOutputDC.md)|Rilascia `m_hDC`, il contesto del dispositivo di output.|  
|[CDC::ResetDC](../Topic/CDC::ResetDC.md)|Aggiorna il contesto di dispositivo `m_hAttribDC`.|  
|[CDC::RestoreDC](../Topic/CDC::RestoreDC.md)|Ripristina il contesto di dispositivo a uno stato precedente salvato con `SaveDC`.|  
|[CDC::RoundRect](../Topic/CDC::RoundRect.md)|Consente di disegnare un rettangolo con angoli arrotondati utilizzando la penna corrente e riempiendoli con il pennello corrente.|  
|[CDC::SaveDC](../Topic/CDC::SaveDC.md)|Salvare lo stato corrente del contesto di dispositivo.|  
|[CDC::ScaleViewportExt](../Topic/CDC::ScaleViewportExt.md)|Modifica l'ambito del riquadro di visualizzazione ai valori correnti.|  
|[CDC::ScaleWindowExt](../Topic/CDC::ScaleWindowExt.md)|Impostare gli ambiti della finestra relativa ai valori correnti.|  
|[CDC::ScrollDC](../Topic/CDC::ScrollDC.md)|Scorre orizzontalmente e verticalmente un rettangolo di bit.|  
|[CDC::SelectClipPath](../Topic/CDC::SelectClipPath.md)|Selezionare il percorso corrente come area per il contesto di dispositivo, combinando la nuova area con qualsiasi area esistente utilizzando la modalità specificata.|  
|[CDC::SelectClipRgn](../Topic/CDC::SelectClipRgn.md)|Combina l'area specificata con l'area di visualizzazione corrente tramite la modalità specificata.|  
|[CDC::SelectObject](../Topic/CDC::SelectObject.md)|Seleziona un oggetto della grafica GDI come una penna.|  
|[CDC::SelectPalette](../Topic/CDC::SelectPalette.md)|Selezionare la tavolozza logica.|  
|[CDC::SelectStockObject](../Topic/CDC::SelectStockObject.md)|Selezionare una delle penne, pennelli, o tipi di carattere predefiniti predefiniti fornite da Windows.|  
|[CDC::SetAbortProc](../Topic/CDC::SetAbortProc.md)|Imposta una funzione di callback programmatore fornita da Windows chiama se un processo di stampa deve essere interrotto.|  
|[CDC::SetArcDirection](../Topic/CDC::SetArcDirection.md)|Impostare la direzione di disegno da utilizzare per l'arco e il rettangolo funziona.|  
|[CDC::SetAttribDC](../Topic/CDC::SetAttribDC.md)|Imposta `m_hAttribDC`, il contesto di dispositivo di attributo.|  
|[CDC::SetBkColor](../Topic/CDC::SetBkColor.md)|Imposta il colore di sfondo corrente.|  
|[CDC::SetBkMode](../Topic/CDC::SetBkMode.md)|Imposta la modalità in background.|  
|[CDC::SetBoundsRect](../Topic/CDC::SetBoundsRect.md)|Archivia l'insieme di informazioni del rettangolo di delimitazione del contesto di dispositivo specificato.|  
|[CDC::SetBrushOrg](../Topic/CDC::SetBrushOrg.md)|Specifica l'origine per il pennello seguente selezionato in un contesto di dispositivo.|  
|[CDC::SetColorAdjustment](../Topic/CDC::SetColorAdjustment.md)|Impostare i valori di regolazione di colore per il contesto di dispositivo utilizzando i valori specificati.|  
|[CDC::SetDCBrushColor](../Topic/CDC::SetDCBrushColor.md)|Imposta il colore corrente del pennello.|  
|[CDC::SetDCPenColor](../Topic/CDC::SetDCPenColor.md)|Imposta il colore della penna corrente.|  
|[CDC::SetGraphicsMode](../Topic/CDC::SetGraphicsMode.md)|Imposta la modalità grafico corrente del contesto di dispositivo specificato.|  
|[CDC::SetLayout](../Topic/CDC::SetLayout.md)|Modifica il layout di un contesto di dispositivo \(DC\).|  
|[CDC::SetMapMode](../Topic/CDC::SetMapMode.md)|Imposta la modalità di mapping corrente.|  
|[CDC::SetMapperFlags](../Topic/CDC::SetMapperFlags.md)|Modificare l'algoritmo che il mapper del tipo di carattere utilizzato quando esegue il mapping dei tipi di carattere logiche a tipi di carattere fisici.|  
|[CDC::SetMiterLimit](../Topic/CDC::SetMiterLimit.md)|Imposta il limite di lunghezza di join di decorato per il contesto di dispositivo.|  
|[CDC::SetOutputDC](../Topic/CDC::SetOutputDC.md)|Imposta `m_hDC`, il contesto del dispositivo di output.|  
|[CDC::SetPixel](../Topic/CDC::SetPixel.md)|Imposta il pixel al punto specificato in maggiore approssimazione del colore specificato.|  
|[CDC::SetPixelV](../Topic/CDC::SetPixelV.md)|Imposta il pixel alle coordinate specificate a maggiore approssimazione del colore specificato.  `SetPixelV` è più veloce `SetPixel` perché non deve restituire il valore del colore del punto effettivamente disegnata.|  
|[CDC::SetPolyFillMode](../Topic/CDC::SetPolyFillMode.md)|Imposta la modalità di riempimento poligoni.|  
|[CDC::SetROP2](../Topic/CDC::SetROP2.md)|Imposta la modalità di disegno corrente.|  
|[CDC::SetStretchBltMode](../Topic/CDC::SetStretchBltMode.md)|Imposta la modalità bitmap\- di adattamento.|  
|[CDC::SetTextAlign](../Topic/CDC::SetTextAlign.md)|Imposta flag di allineamento del testo.|  
|[CDC::SetTextCharacterExtra](../Topic/CDC::SetTextCharacterExtra.md)|Imposta la quantità di spaziatura di intercharacter.|  
|[CDC::SetTextColor](../Topic/CDC::SetTextColor.md)|Imposta il colore del testo.|  
|[CDC::SetTextJustification](../Topic/CDC::SetTextJustification.md)|Aggiunge lo spazio per i caratteri di interruzione in una stringa.|  
|[CDC::SetViewportExt](../Topic/CDC::SetViewportExt.md)|Imposta la x e y gli ambiti del riquadro di visualizzazione.|  
|[CDC::SetViewportOrg](../Topic/CDC::SetViewportOrg.md)|Imposta l'origine del riquadro di visualizzazione.|  
|[CDC::SetWindowExt](../Topic/CDC::SetWindowExt.md)|Imposta la x e y gli ambiti della finestra collegata.|  
|[CDC::SetWindowOrg](../Topic/CDC::SetWindowOrg.md)|Imposta l'origine della finestra del contesto di dispositivo.|  
|[CDC::SetWorldTransform](../Topic/CDC::SetWorldTransform.md)|Impostare la trasformazione corrente dello spazio dello spazio globale.|  
|[CDC::StartDoc](../Topic/CDC::StartDoc.md)|Notifica al driver di dispositivo che un nuovo processo di stampa è iniziale.|  
|[CDC::StartPage](../Topic/CDC::StartPage.md)|Notifica al driver di dispositivo che una nuova pagina viene iniziale.|  
|[CDC::StretchBlt](../Topic/CDC::StretchBlt.md)|Passa una bitmap da un rettangolo di origine e il dispositivo in un rettangolo di destinazione, adattante o pacchetti la bitmap se necessario per adattare le dimensioni del rettangolo di destinazione.|  
|[CDC::StrokeAndFillPath](../Topic/CDC::StrokeAndFillPath.md)|Chiusura delle figure affatto aperto in un percorso, colpisce la struttura del percorso tramite la penna corrente e inserisce il suo interno utilizzando il pennello corrente.|  
|[CDC::StrokePath](../Topic/CDC::StrokePath.md)|Esegue il rendering del percorso specificato mediante la penna corrente.|  
|[CDC::TabbedTextOut](../Topic/CDC::TabbedTextOut.md)|Genera una stringa di caratteri a una posizione specificata, l'espansione le schede sui valori specificati in una matrice di posizioni tabstop.|  
|[CDC::TextOut](../Topic/CDC::TextOut.md)|Genera una stringa di caratteri a una posizione specificata tramite il tipo attualmente selezionata.|  
|[CDC::TransparentBlt](../Topic/CDC::TransparentBlt.md)|Trasferisce un blocco di bit di dati di colore dal contesto di dispositivo di origine specificato in un contesto di dispositivo di destinazione, eseguendo il rendering di un colore specificato trasparente nel trasferimento.|  
|[CDC::UpdateColors](../Topic/CDC::UpdateColors.md)|Aggiorna l'area client del contesto di dispositivo e i colori correnti nell'area client della tavolozza di sistema per i pixel per pixel.|  
|[CDC::WidenPath](../Topic/CDC::WidenPath.md)|Ridefinisce il percorso corrente come area che verrebbe disegnata se il percorso è impostato su out utilizzando la penna selezionata nel contesto di dispositivo.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::operator HDC](../Topic/CDC::operator%20HDC.md)|Recupera l'handle del contesto di dispositivo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::m\_hAttribDC](../Topic/CDC::m_hAttribDC.md)|Il contesto di attributo\- dispositivo utilizzato da questo oggetto `CDC`.|  
|[CDC::m\_hDC](../Topic/CDC::m_hDC.md)|Il contesto del dispositivo di output utilizzato da questo oggetto `CDC`.|  
  
## Note  
 L'oggetto `CDC` fornisce funzioni membro per un contesto di dispositivo, ad esempio una visualizzazione o una stampante e membri per utilizzare un contesto di visualizzazione associato all'area client di una finestra.  
  
 Fare tutto il disegno con funzioni membro di un oggetto `CDC`.  La classe fornisce le funzioni membro per le operazioni di contesto di dispositivo, utilizzare gli strumenti di disegno, la selezione indipendente dai tipi di oggetto di \(GDI\) \(application programming Interface\) e utilizzare i colori e le tavolozze.  Fornisce anche funzioni membro per ottenere e impostare gli attributi di disegno, mapping, utilizzando il riquadro di visualizzazione, utilizzando l'estensione della finestra, converte le coordinate, utilizzare le aree, l'area di visualizzazione, il disegno e forme semplici di disegno, ellissi e poligoni.  Le funzioni membro vengono fornite per creare testo, utilizzando tipi di carattere, l'utilizzo di escape della stampante, lo spostamento e di riprodurre metafile.  
  
 Per utilizzare un oggetto `CDC`, costruiscalo quindi chiamare le funzioni membro che funzioni Windows parallele che utilizzano i contesti di periferica.  
  
> [!NOTE]
>  In Windows 95\/98, tutte le coordinate dello schermo sono limitate a 16 bit.  Pertanto, `int` passato a una funzione membro `CDC` deve rientrare nell'intervallo da 32768 a 32767.  
  
 Per utilizzi specifici, la libreria MFC fornisce molte classi derivate da `CDC`.  `CPaintDC` incapsula le chiamate a `BeginPaint` e a `EndPaint`.  `CClientDC` gestisce un contesto di visualizzazione associato all'area client di una finestra.  `CWindowDC` gestisce un contesto di visualizzazione associato a un'intera finestra, inclusi i frame e.  `CMetaFileDC` associa un contesto di dispositivo con metafile.  
  
 `CDC` vengono fornite due funzioni membro, [GetLayout](../Topic/CDC::GetLayout.md) e [SetLayout](../Topic/CDC::SetLayout.md), per invertire il layout di un contesto di dispositivo, non eredita il layout di una finestra.  Tale orientamento da destra a sinistra è necessario per le applicazioni scritte per le impostazioni cultura, ad esempio l'arabo o l'ebraico, dove il layout del carattere non viene la regola europea.  
  
 `CDC` contiene due contesti di periferica, [m\_hDC](../Topic/CDC::m_hDC.md) e [m\_hAttribDC](../Topic/CDC::m_hAttribDC.md), che, nella creazione di un oggetto `CDC`, si riferiscono allo stesso dispositivo.  `CDC` indirizza tutte le chiamate di output GDI a `m_hDC` e la maggior parte delle chiamate di attributo GDI a `m_hAttribDC`.  \(Un esempio di chiamata di attributo è `GetTextColor`, mentre `SetTextColor` è una chiamata di output\).  
  
 Ad esempio, il framework utilizza questi due contesti di periferica per implementare un oggetto `CMetaFileDC` che invia l'output a un metafile mentre legge gli attributi da una periferica fisica.  L'anteprima di stampa è implementata nel framework in modo simile.  È inoltre possibile utilizzare i due contesti di periferica in modo simile nel codice specifico dell'applicazione.  
  
 Vi sono casi in cui potrebbe essere necessario disporre delle informazioni del metriche dai contesti di periferica `m_hAttribDC``m_hDC`.  Le coppie seguenti di funzioni forniscono questa funzionalità:  
  
|Utilizza il m\_hAttribDC|Utilizza il m\_hDC|  
|------------------------------|------------------------|  
|[GetTextExtent](../Topic/CDC::GetTextExtent.md)|[GetOutputTextExtent](../Topic/CDC::GetOutputTextExtent.md)|  
|[GetTabbedTextExtent](../Topic/CDC::GetTabbedTextExtent.md)|[GetOutputTabbedTextExtent](../Topic/CDC::GetOutputTabbedTextExtent.md)|  
|[GetTextMetrics](../Topic/CDC::GetTextMetrics.md)|[GetOutputTextMetrics](../Topic/CDC::GetOutputTextMetrics.md)|  
|[GetCharWidth](../Topic/CDC::GetCharWidth.md)|[GetOutputCharWidth](../Topic/CDC::GetOutputCharWidth.md)|  
  
 Per ulteriori informazioni su `CDC`, vedere [Contesti di periferica](../../mfc/device-contexts.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDC`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPaintDC Class](../../mfc/reference/cpaintdc-class.md)   
 [CWindowDC Class](../../mfc/reference/cwindowdc-class.md)   
 [CClientDC Class](../../mfc/reference/cclientdc-class.md)   
 [CMetaFileDC Class](../../mfc/reference/cmetafiledc-class.md)